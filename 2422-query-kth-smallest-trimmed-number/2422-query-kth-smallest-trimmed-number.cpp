class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& q) 
    {
        vector<int> ans;
        
        for(auto i:q)
        {
            int x = i[0];
            int y = i[1];
            
            int n = nums.size();
            vector<pair<string,int>> v;
            
            for(int j=0;j<n;j++)
            {
                int sz = nums[j].size();
                string s = nums[j].substr(sz-y,y);
                v.push_back({(s),j});
            }
            
            sort(v.begin(),v.end());
            
            // for(auto k:v)
            //     cout<<k.first<<" "<<k.second<<endl;
            
            ans.push_back(v[x-1].second);
        }
        
        return ans;
    }
};