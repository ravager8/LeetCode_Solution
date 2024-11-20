class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        int n = nums.size();
        long long sum = 0;
        long long ans = 0;
        int j = 0;

        for(int i=0;i<n;i++){

            mp[nums[i]]++;
            sum += nums[i];

            while(mp[nums[i]]>1){
                mp[nums[j]]--;
                sum -= nums[j];
                j++;
            }

            if(i-j+1==k){
                // cout<<sum<<endl;
                ans = max(ans,sum);
                mp[nums[j]]--;
                sum -= nums[j];
                j++;
            }
        }

        return ans;
    }
};