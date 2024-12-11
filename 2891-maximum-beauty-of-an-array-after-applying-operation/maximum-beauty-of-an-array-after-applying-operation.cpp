class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        
        int mx = 0;
        int ans = 0;
        int value = 0;
        int n = nums.size();

        for(int i=0;i<n;i++) {
            mx = max(mx,nums[i]);
        }

        vector<int> freq(mx+(2*k)+2,0);

        for(auto i:nums) {

            freq[i]++;
            freq[i + (2*k) + 1]--;
        }

        for(auto i:freq) {

            value += i;
            ans = max(ans,value);
        }

        return ans;
    }
};