class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) 
    {
        vector<int> o_d(n,0);

        for(auto i:roads)
        {
            for(auto j:i)
            {
                o_d[j]++;
            }
        }

        sort(o_d.begin(),o_d.end());

        long long ans = 0;

        for(long long i=0;i<n;i++)
        {
            ans += ((i+1)*o_d[i]);
        }

        return ans;

        // vector<vector<int>> v;

        // for(int i=0;i<n;i++)
        // {
        //     v.push_back({o_d[i],i});
        // }

        // sort(v.begin(),v.end());

        // for(int i=0;i<n;i++)
        // {
        //     v[i][0] = i+1;
        //     swap(v[i][0],v[i][1]);
        //     // cout<<v[i][0]<<" "<<v[i][1]<<endl;
        // }

        // sort(v.begin(),v.end());

        // long long ans = 0;

        // for(auto i:roads)
        // {
        //     long long x = 0;

        //     for(auto j:i)
        //     {
        //         x += v[j][1];
        //     }

        //     // cout<<x<<endl;
        //     ans += x;
        // }

        // return ans;
    }
};