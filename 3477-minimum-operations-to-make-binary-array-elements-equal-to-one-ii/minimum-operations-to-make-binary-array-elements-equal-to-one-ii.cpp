class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int n = nums.size();
        int cnt_change = 0;
        int ans = 0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==0 and cnt_change%2==0)
            {
                ans++;
                cnt_change++;
            }
            else if(nums[i]==1 and cnt_change%2==1)
            {
                ans++;
                cnt_change++;
            }
        }

        return ans;
    }
};