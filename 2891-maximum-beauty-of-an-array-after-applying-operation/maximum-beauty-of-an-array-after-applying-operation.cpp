class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0,j=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            while(nums[i]-nums[j] > 2*k)
                j++;

            ans = max(ans,i-j+1);
        }
        return ans;
    }
};