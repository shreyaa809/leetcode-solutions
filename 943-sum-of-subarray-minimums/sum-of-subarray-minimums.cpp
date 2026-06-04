#define moduloo 1000000007
class Solution {
public:
    vector<int> PSEE(vector<int>&arr)
    {
        int n=arr.size();
        stack<int>st;
        vector<int>pse(n);
        for (int i=0;i<n;i++)
        {
            while (!st.empty()&&(arr[i]<arr[st.top()]))
            st.pop();
            pse[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return pse;
    }
    vector<int> NSE(vector<int>&arr)
    {
        int n=arr.size();
        stack<int>st;
        vector<int>nse(n);
        for (int i=n-1;i>=0;i--)
        {
            while (!st.empty()&&arr[i]<=arr[st.top()])
            st.pop();
            nse[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return nse;
    }
    int sumSubarrayMins(vector<int>& arr) 
    {
        int n=arr.size();
        long long sum=0;
        vector<int>pse=PSEE(arr);
        vector<int>nse=NSE(arr);
        for (int i=0;i<n;i++)
        {
            int left=i-pse[i];
            int right=nse[i]-i;
            sum=(sum+((left*1LL*right*arr[i]))%moduloo)%moduloo;

        }
        return sum;
    }
};