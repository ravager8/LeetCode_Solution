class Solution {
public:
    vector<int> dp;
 
    int f(int i,int k,vector<int> &arr)
    {
        if(i==0)
        return 0;

        if(dp[i]!=-1)
        return dp[i];

        int curr_sum = 0;
        int mx_sum = 0;

        for(int j=1;j<=k and j<=i;++j)
        {
            curr_sum = max(curr_sum,arr[i-j]);
            mx_sum = max(mx_sum,f(i-j,k,arr)+curr_sum*(j));
        }

        dp[i] = mx_sum;
        return dp[i];
    }
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) 
    {
        int n = arr.size();
        // vector<int> dp(n+1,-1);
        dp.assign(n+1,-1);

        return f(n,k,arr);
    }
};