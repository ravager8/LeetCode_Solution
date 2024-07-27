class Solution {
public:
    long long minimumCost(string sr, string tr, vector<char>& og, vector<char>& cd, vector<int>& ct) 
    {
        int n = sr.size();
        int m = og.size();
        vector<vector<long long>> min_dis(26,vector<long long> (26,INT_MAX));
        long long ans = 0;

        for(int i=0;i<26;i++)
        min_dis[i][i] = 0;

        for(int i=0;i<m;i++)
        {
            min_dis[og[i]-'a'][cd[i]-'a'] = min(min_dis[og[i]-'a'][cd[i]-'a'],(long long)ct[i]);
        }

        for(int i=0;i<26;i++)
        {
            for(int j=0;j<26;j++)
            {
                for(int k=0;k<26;k++)
                {
                    min_dis[j][k] = min(min_dis[j][i]+min_dis[i][k],min_dis[j][k]);
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            if(min_dis[sr[i]-'a'][tr[i]-'a']==INT_MAX)
            return -1;
            else
            ans += min_dis[sr[i]-'a'][tr[i]-'a'];
        }

        return ans;
    }
};