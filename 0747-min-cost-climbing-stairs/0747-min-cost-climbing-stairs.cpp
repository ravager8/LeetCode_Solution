class Solution {
public:
    int f(int i,vector<int> &c,vector<int> &dp)
    {
        if(i>=c.size())
        return 0;

        if(dp[i]!=-1)
        return dp[i];

        int take = c[i] + f(i+1,c,dp);
        int not_take = c[i] + f(i+2,c,dp);

        return dp[i] = min(take,not_take);
    }

    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size();

        if(n==2)
        return min(cost[0],cost[1]);

        vector<int> dp(n,-1);

        return min(f(0,cost,dp),f(1,cost,dp));
    }
};