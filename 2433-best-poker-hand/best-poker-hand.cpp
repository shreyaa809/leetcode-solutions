class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) 
    {
        int fin_res=-1; //5 for flush, >=3for TOAK, 2 for pair, and 1 for HC
        int n=ranks.size();
        unordered_map <int,int> same_rank;
        unordered_map<int,int>same_card;

        for (int i=0;i<n;i++)
        {
            same_rank[ranks[i]]+=1;
            same_card[suits[i]]+=1;
        }
        for (int i=0;i<n;i++)
        {
            if (same_card[suits[i]]>=5)
            return "Flush";
        }
        for (int i=0;i<n;i++)
        {
            if (same_rank[ranks[i]]>=3)
            return "Three of a Kind";
        }
        for (int i=0;i<n;i++)
        {
            if (same_rank[ranks[i]]==2)
            return "Pair";
        }
        return "High Card";
    }
};