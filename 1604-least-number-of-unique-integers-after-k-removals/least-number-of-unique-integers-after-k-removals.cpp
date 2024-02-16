class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        int n = arr.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }

        vector<pair<int,int>> v;

        for(auto i:mp)
        {
            v.push_back({i.second,i.first});
        }

        sort(v.begin(),v.end());

        for(auto i:v)
        {
            if(k<=0)
            break;

            int freq = i.first;
            int value = i.second;

            if(k>=freq)
            {
                mp[value] = 0;
                k -= freq;
            }
            else
            {
                k = 0;
            }
        }

        int ans = 0;

        for(auto i:mp)
        {
            if(i.second>0)
            ans++;
        }

        return ans;

    }
};