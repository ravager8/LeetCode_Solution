class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& nd)
    {
        int gcd = nd[0];

        for(int i=0;i<nd.size();i++)
        {
            gcd = __gcd(gcd,nd[i]);
        }

        int ans = 0;

        map<int,int> mp;

        for(auto i:nums)
        {
            mp[i]++;
        }

        for(auto i:mp)
        {
            int x = i.first;
            if(gcd%x==0)
            {
                return ans;
            }
            else
            ans += i.second;
        }

        return -1;

    }
};