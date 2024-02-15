class Solution {
public:
    long long largestPerimeter(vector<int>& nums) 
    {
        long long ans = -1;
        long long curr_sum = 0;
        long long length = 0;
        int n = nums.size();
        int i=0;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++)
        {
            // curr_sum += nums[i];
            length += 1;

            if(length>=3 and curr_sum>nums[i])
            ans = curr_sum + nums[i];

            curr_sum += nums[i];
        }

        return ans;
    }
};