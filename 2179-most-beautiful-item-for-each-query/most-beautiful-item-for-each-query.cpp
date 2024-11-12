class Solution {
public:
    static bool comparing(const vector<int> &a,const vector<int> &b){
        if(a[0]==b[0])
        return a[1]>b[1];
        
        return a[0]<b[0];
    }

    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        
        vector<int> ans;
        vector<int> q = queries;
        sort(q.begin(),q.end());
        sort(items.begin(),items.end(),comparing);
        int mx = 0;
        unordered_map<int,int> mp;
        int j = 0;

        for(auto i:items){

            while(j<q.size() and q[j]<i[0]) {
                mp[q[j]] = mx;
                j++;
            }
            
            mx = max(mx,i[1]);

            // if(j<q.size())
            // {
            //     mp[q[j]] = mx;
            //     // cout<<q[j]<<" "<<mx<<endl;
            //     j++;
            // } else {
            //     break;
            // }
        }

        while(j<q.size()){
            mp[q[j]] = mx;
            j++;
        }

        for(auto i:queries){
            if(mp.find(i)!=mp.end()){
                ans.push_back(mp[i]);
            } else {
                ans.push_back(0);
            }
        }

        return ans;
    }
};