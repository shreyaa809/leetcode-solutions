class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) 
    {
            vector<string>times;
            
            for (int hours=0;hours<12;hours++)
            {
                for (int min=0;min<60;min++)
                {
                    if (__builtin_popcount(hours)+__builtin_popcount(min)==turnedOn)
                    {
                        string h=to_string(hours);
                        string m=(min<10?"0":"")+to_string(min);
                        string t=h+":"+m;
                        times.push_back(t);
                    }
                }
            }


            return times;
    }
};