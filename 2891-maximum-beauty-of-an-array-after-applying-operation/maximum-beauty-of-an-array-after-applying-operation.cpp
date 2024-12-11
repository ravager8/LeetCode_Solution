class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        
        int ans = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int l = 0;
      

        for(int i=0;i<n;i++){

            while(nums[i]-nums[l] > 2*k)
            l++;

            ans = max(ans,i-l+1);
        }

        return ans;
    }
};