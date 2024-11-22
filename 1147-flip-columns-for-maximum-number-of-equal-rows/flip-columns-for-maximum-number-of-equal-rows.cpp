class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        
        unordered_map<string,int> mp;
        int ans = 0;

        for(auto row:matrix){
            string pattern = "";
            
            if(row[0]==0){
                for(auto i:row){
                    pattern += to_string(i);
                }
            } else{
                for(auto i:row){
                    pattern += to_string(i^1);
                }
            }

            mp[pattern]++;
        }

        for(auto i:mp){
            ans = max(ans,i.second);
        }

        return ans;
    }
};