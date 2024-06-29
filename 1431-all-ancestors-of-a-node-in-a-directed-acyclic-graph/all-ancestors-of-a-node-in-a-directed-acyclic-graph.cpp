class Solution {
public:
    void dfs(int i,int a,vector<vector<int>>& adj,vector<int>& visited,vector<vector<int>>& temp)
    {
        visited[i] = 1;

        for(auto j:adj[i])
        {
            if(!visited[j])
            {
                visited[j] = 1;
                temp[j].push_back(a);
                dfs(j,a,adj,visited,temp);
            }
            else
            continue;
        }

        return;
    }

    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) 
    {
        vector<vector<int>> ans(n);
        vector<vector<int>> adj(n);

        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
        }

        for(int i=0;i<n;i++)
        {
            vector<int> visited(n,0);
            // vector<int> temp;

            dfs(i,i,adj,visited,ans);
            // ans.push_back(temp);
        }

        return ans;
    }
};