class Solution {
public:
    
    int f(int i,vector<int> &nums,int target,vector<vector<int>> &dp)
    {
        if(target==0)
            return 0;
        
        if(i>=nums.size() or target<0)
            return -1e8;
        
        if(dp[i][target]!=-1)
            return dp[i][target];
        
        
        int take = 1 + f(i+1,nums,target-nums[i],dp);
        
        int not_take = f(i+1,nums,target,dp);
        
        return dp[i][target] = max(take,not_take);
    }
    
    int lengthOfLongestSubsequence(vector<int>& nums, int target) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        
        return f(0,nums,target,dp)>0?f(0,nums,target,dp):-1;
    }
};