class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mx_length = 1;

        vector<int> dp(n,1);

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(!(nums[i]%nums[j]) and dp[i]<dp[j]+1)
                dp[i] = dp[j] + 1;

                if(mx_length<dp[i])
                mx_length = dp[i];
            }
        }

        int temp = -1;
        vector<int> ans;

        for(int i=n-1;i>=0;i--)
        {
            if(mx_length==dp[i] and (temp==-1 or !(temp%nums[i])))
            {
                mx_length--;
                ans.push_back(nums[i]);
                temp = nums[i];
            }
        }

        return  ans;
    }
};