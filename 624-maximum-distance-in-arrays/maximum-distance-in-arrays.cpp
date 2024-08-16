class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays){

        int n = arrays.size();
        int ans = -1e9;
        int n1 = arrays[0].size();
        int mx = arrays[0][n1-1];
        int mn = arrays[0][0];

        for(int i=1;i<n;i++){

            int n2 = arrays[i].size();
            int a = arrays[i][0];
            int b = arrays[i][n2-1];

            ans = max(ans,max(abs(mx-a),max(abs(mx-b),max(abs(mn-a),abs(mn-b)))));

            if(mx<b) mx = b;
            if(mn>a) mn = a;
        }
        
        return ans;
    }
};