class Solution {
public:
    int minDifference(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int ans = INT_MAX;
        int n = nums.size();

        if(n<=4)
        return 0;

        int t1 = nums[n-4] - nums[0];
        int t2 = nums[n-1] - nums[3];
        int t3 = nums[n-2] - nums[2];
        int t4 = nums[n-3] - nums[1];

        ans = min(t1,min(t2,min(t3,t4)));
        return ans;
    }
};