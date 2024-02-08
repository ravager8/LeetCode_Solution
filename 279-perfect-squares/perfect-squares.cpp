class Solution {
public:
    long long int f(int i,long long int sum,int n,int m,vector<int> &v,vector<vector<long long int>> &dp)
    {
        if(i>=m or sum>n)
        return 1e5;

        if(sum==n)
        return 0;

        if(dp[i][sum]!=-1)
        return dp[i][sum];

        long long int take = 1e5;

        if(sum+v[i]<=n)
        take = 1 + f(i,sum+v[i],n,m,v,dp);

        long long int not_take = f(i+1,sum,n,m,v,dp);

        return dp[i][sum] = min(take,not_take);
    }

    int numSquares(int n) 
    {
        vector<int> v;

        for(int i=1;i<=n;i++)
        {
            int k = i*i;

            if(k>n)
            break;
            else
            v.push_back(k);
        }

        int m = v.size();

        vector<vector<long long int>> dp(m+1,vector<long long int>(n+1,-1));
        long long int a = 0;

        return f(0,a,n,m,v,dp);

        // return 0;
    }
};