class Solution {
public:
    void backtracking(vector<int>& nums,int k,unordered_map<int,int> &mp,int &ans,int ind)
    {
        if(ind == nums.size())
        {
            ans ++;
            return;
        }

        backtracking(nums,k,mp,ans,ind+1);

        int num = nums[ind];

        if(!mp[num-k])
        {
            mp[num]++;
            backtracking(nums,k,mp,ans,ind+1);
            mp[num]--;
        }
    }

    int beautifulSubsets(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        int ans = 0;
        backtracking(nums,k,mp,ans,0);

        return ans - 1;
    }
};