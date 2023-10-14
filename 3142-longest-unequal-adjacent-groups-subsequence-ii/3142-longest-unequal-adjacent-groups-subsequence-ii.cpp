class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& w, vector<int>& g) 
    {
        vector<int> mx_len(n,1);
        vector<int> pre(n,-1);

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(g[i]==g[j])
                continue;
                if(w[i].size()!=w[j].size())
                continue;

                int diff = 0;

                for(int k=0;k<w[i].size();k++)
                {
                    if(w[i][k]!=w[j][k])
                    diff++;
                }

                if(diff!=1)
                continue;

                if(mx_len[j]+1 > mx_len[i])
                {
                    mx_len[i] = mx_len[j] + 1;
                    pre[i] = j;
                }
            }
        }

        int mx = 0;
        int index = 0;
        int prev = 0;

        for(int i=0;i<n;i++)
        {
            if(mx_len[i] > mx)
            {
                index = i;
                mx = mx_len[i];
                prev = pre[i];
            }
        }

        vector<string> ans;
        
        ans.push_back(w[index]);

        while(prev!=-1)
        {
            ans.push_back(w[prev]);
            prev = pre[prev];
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};