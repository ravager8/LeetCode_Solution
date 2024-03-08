class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int> mp;
        int mx = 0;

        for(auto i:nums)
        {
            mp[i]++;

            if(mp[i]>mx)
            mx = mp[i];
        }

        int ans = 0;

        for(auto i:mp)
        {
            if(i.second==mx)
            ans+=mx;
        }

        return ans;
    }
};