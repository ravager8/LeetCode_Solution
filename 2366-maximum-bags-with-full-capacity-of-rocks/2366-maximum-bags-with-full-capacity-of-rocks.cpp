class Solution {
public:
    int maximumBags(vector<int>& cpty, vector<int>& rks, int ar) 
    {
        vector<int> v;

        for(int i=0;i<cpty.size();i++)
        {
            v.push_back(cpty[i]-rks[i]);
        }

        sort(v.begin(),v.end());

        int ans = 0;
        int i=0;

        while(ar>=0 and i<cpty.size())
        {
            ar = ar-v[i];

            i++;

            if(ar>=0)
            ans++;
        }

        return ans;
    }
};