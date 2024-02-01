class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        vector<vector<int>> ans(n/3,vector<int>(3,0));
        
        bool flag = true;
        // int k = 0;
        
        for(int i=0;i<n;i++)
        {
            ans[i/3][i%3] = nums[i];
        }
        
        for(int i=0;i<n/3;i++)
        {
            for(int j=2;j<3;j++)
            {
                if(ans[i][j]-ans[i][j-2]>k)
                {
                    flag = false;
                    break;
                }
            }
        }
        
        vector<vector<int>> ans2;
        
        if(flag)
            return ans;
        else
            return ans2;
    }
};