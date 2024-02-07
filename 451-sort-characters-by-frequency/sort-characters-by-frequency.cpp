class Solution {
public:
    string frequencySort(string s) 
    {
        int n = s.size();
        string ans = "";

        vector<pair<int,char>> v;
        unordered_map<char,int> mp;

        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }

        for(auto i:mp)
        {
            v.push_back({i.second,i.first});
        }

        sort(v.rbegin(),v.rend());

        for(auto i:v)
        {
            int a = i.first;

            while(a)
            {
                ans += i.second;
                a--;
            }
        }

        return ans;
    }
};