class Solution {
public:
    int minGroupsForValidAssignment(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> v;
        map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto i:mp)
        {
            v.push_back(i.second);
            // cout<<i.second<<endl;
        }
        
        sort(v.begin(),v.end());
        
        int k = v[0];
        int len = 1;
        
        while(k>0)
        {
            bool flag = true;
            
            for(int i=0;i<v.size();i++)
            {
                int a = v[i]%k;
                int b = v[i]/k;
                
                if(b>=a)
                    continue;
                else
                {
                    flag = false;
                    break;
                }
            }
            
            if(flag == true)
            {
                len = k;
                break;
            }
            
            k--;
        }
        
        // cout<<len<<endl;
        int ans = 0;
        
        for(int i=0;i<v.size();i++)
        {
            int c = v[i]/(len+1);
            int d = v[i]%(len+1);
            
            if(d==0)
                ans += c;
            else
                ans += c+1;
        }
        
        return ans;
    }
};