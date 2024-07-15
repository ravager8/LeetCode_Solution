/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
// Approach - 1st lets find the parent;
// then contrust tree from parent with help of the adj vector created 

    void dfs(TreeNode* curr,int i,vector<vector<pair<int,int>>> &adj,vector<int> &visited)
    {
        visited[i] = 1;

        for (auto &j : adj[i]) {
            TreeNode* t = new TreeNode(j.first);
            if (j.second == 1) {
                curr->left = t;
            } else {
                curr->right = t;
            }

            if (!visited[j.first]) {
                dfs(t, j.first, adj, visited);
            }
        }
    }

    TreeNode* createBinaryTree(vector<vector<int>>& d) 
    {
        vector<vector<pair<int,int>>> adj(1e5+1);
        unordered_map<int,int> mp;
        vector<int> visited(1e5+1,0);
        int n = d.size();
        int parent = -1;

        for(int i=0;i<n;i++)
        {
            adj[d[i][0]].push_back({d[i][1],d[i][2]});
            mp[d[i][1]]++;
            mp[d[i][0]]+=0;
        }

        // for(auto i:adj)
        // {
        //     for(auto j:i)
        //     cout<<j.first<<" "<<j.second<<endl;
        // }

        for(auto i:mp)
        {
            if(i.second==0)
            {
                parent = i.first;
                break;
            }
        }

        // cout<<parent<<endl;

        TreeNode* temp = new TreeNode(parent);
        dfs(temp,parent,adj,visited);

        return temp;
    }
};






















