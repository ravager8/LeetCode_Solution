class Solution {
public:
    map<int,int> mp;
    bool flag = false;
    
    int f(int num)
    {
        int s = 0;
        
        while(num>0)
        {
            s += num%10;
            num = num/10;
        }
        
        mp[s]++;
        
        if(mp[s]>1)
            flag = true;
        
        return s;
    }
    
    int maximumSum(vector<int>& nums) 
    {
        sort(nums.rbegin(),nums.rend());
        int n = nums.size();
        
        vector<int> s(n);
        
        for(int i=0;i<n;i++)
        {
            // cout<<nums[i]<<endl;
            int x = f(nums[i]);
            // cout<<x<<endl;
            s[i] = x;
            // cout<<s[i]<<endl;
        }
        
        if(flag == false)
        {
            return -1;
        }    
        
        int r = n;
        int l = 0;
        int a = 0;
        
        while(l<r)
        {
            if(mp[s[l]]<=1)
            {
                mp[s[l]]--;
                l++;
            }
            else
            {
                mp[s[l]] = 0;
                
                for(int j=l+1;j<r;j++)
                {
                // cout<<sum[j]<<endl;
                   if(s[l]==s[j])
                    {
                        a = max(a,(nums[l]+nums[j]));
                        r = j;
                        l++;
                        break;
                    }
                }  
            }
        }
        
        return a;
    }
};