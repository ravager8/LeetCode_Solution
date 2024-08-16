class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays){

        int n = arrays.size();
        int ans = -1e9;
        // int n1 = arrays[0].size();
        int mx = arrays[0].back();
        int mn = arrays[0][0];

        for(int i=1;i<n;i++){

            // int n2 = arrays[i].size();
            int a = arrays[i][0];
            int b = arrays[i].back();

            ans = max(ans,max(abs(mx-a),abs(mn-b)));

            if(mx<b) mx = b;
            if(mn>a) mn = a;
        }
        
        return ans;
    }
};