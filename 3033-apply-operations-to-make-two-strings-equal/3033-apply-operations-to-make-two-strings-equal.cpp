class Solution {
public:
    
    int f(int l,int r,vector<int> &a,vector<vector<int>> &dp,int x)
    {
        if(l>=r)
        return 0;

        if(dp[l][r]!=-1)
        return dp[l][r];

        int ans = min({min(x,a[l+1]-a[l])+f(l+2,r,a,dp,x),min(x,a[r]-a[l])+f(l+1,r-1,a,dp,x),min(x,a[r]-a[r-1])+f(l,r-2,a,dp,x)});

        return dp[l][r] = ans;
    }
   
    int minOperations(string s1, string s2, int x) 
    {
        vector<int> v;
        int n = s1.size();

        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            v.push_back(i);
        }

        if(v.size()%2!=0)
        return -1;

        vector<vector<int>> dp(501,vector<int>(501,-1));

        return f(0,v.size()-1,v,dp,x);
    }
};