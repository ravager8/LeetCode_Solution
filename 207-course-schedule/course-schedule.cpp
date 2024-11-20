class Solution {
public:
    bool canFinish(int nc, vector<vector<int>>& pre) {
        // making adj list;
        int x = nc;
        vector<int> adj[x];

        for(auto i:pre){
            adj[i[1]].push_back(i[0]);
        }

        //making the indegree vector
        int indegree[nc];

        for(int i=0;i<x;i++){
            indegree[i] = 0;
        }

        for(int i=0;i<x;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }

        //making the queue with all elements having indegree 0;
        queue<int> q;

        for(int i=0;i<x;i++){
            cout<<indegree[i];
            if(indegree[i]==0) q.push(i);
        }

        vector<int> topo;

        while(!q.empty()){

            int node = q.front();
            q.pop();
            topo.push_back(node);

            for(auto i:adj[node]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }

        return topo.size()==x ? true : false;

    }
};