class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        for (int i=0;i<9;i++)
        {
            set<char>s;
            for (int j=0;j<9;j++)
            {
                if (board[i][j]=='.')
                continue;
                if (s.find(board[i][j])!=s.end())
                return false;
                s.insert(board[i][j]);
            }
        }

        for (int j=0;j<9;j++)
        {
            set<char>s;
            for (int i=0;i<9;i++)
            {
                if (board[i][j]=='.')
                continue;
                if (s.find(board[i][j])!=s.end())
                return false;
                s.insert(board[i][j]);
            }
        }


        for (int j=0;j<9;j+=3)
        {
            
            for (int i=0;i<9;i+=3)
            {
                set<char>s;
                for (int row=i;row<i+3;row++)
                {
                    for (int col=j;col<j+3;col++)
                    {
                        if (board[row][col]=='.')
                        continue;
                        if (s.find(board[row][col])!=s.end())
                        return false;
                        s.insert(board[row][col]);
                    }
                }
            }
        }
        return true;

    }
};