class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n = nums.size();
        vector<int> not_special;
        vector<bool> ans;

        for(int i=0;i<n-1;i++){

            if(nums[i]%2 == nums[i+1]%2) {
                not_special.push_back(i);
            }

            // 3 4 1 2 6
            // not_special = 3
        }

        for(auto q:queries) {

            int l = q[0];
            int h = q[1];

            auto it = lower_bound(not_special.begin(),not_special.end(),l);

            if(it!=not_special.end() and *it <= h-1){
                ans.push_back(false);
            } else {
                ans.push_back(true);
            }
        }

        return ans;
    }
};