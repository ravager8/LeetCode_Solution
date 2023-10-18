class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& rel, vector<int>& time) 
    {
        vector<int> indegree(n+1,0);
        queue<int> q;
        vector<int> adj[n+1];
        vector<int> adj1[n+1];
        vector<int> dp(n+1);

        for(auto i:rel)
        {
            adj[i[0]].push_back(i[1]);
            adj1[i[1]].push_back(i[0]);
            indegree[i[1]]++;
        }

        for(int i=1;i<n+1;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }

        vector<int> topo;

        while(!q.empty())
        {
            topo.push_back(q.front());
            int x = q.front();
            q.pop();

            for(auto i:adj[x])
            {
                indegree[i]--;

                if(indegree[i]==0)
                q.push(i);
            }
        }

        // for(auto i:topo)
        // cout<<i<<endl;
        int ans = 0;

        for(auto i:topo)
        {
            int mx = 0;

            for(auto j:adj1[i])
            {
                mx = max(mx,dp[j]);
            }

            // cout<<mx<<endl;

            dp[i] = time[i-1] + mx;

            ans = max(ans,dp[i]);
        }

        return ans;
    }
};