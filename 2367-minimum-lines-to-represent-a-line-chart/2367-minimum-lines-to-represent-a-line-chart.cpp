class Solution {
public:
    int minimumLines(vector<vector<int>>& sp) 
    {
        sort(sp.begin(),sp.end());
        int n = sp.size();
        int prev = 0;
        int prev2 = 0;
        int ans = 0;

        for(int i=0;i<n-1;i++)
        {
            int x = sp[i][0];
            int y = sp[i][1];

            int x1 = sp[i+1][0];
            int y1 = sp[i+1][1];

            long long int slope = (y1-y);
            long long int slope2 = x1-x;

            // cout<<double(slope)<<endl;
            long long int m = slope*prev2;
            long long int m1 = slope2*prev;

            if(i==0)
            {
                ans ++;
                prev = slope;
                prev2 = slope2;
            }
            else if(m==m1)
            {
                continue;
            }
            else
            {
                ans++;
                prev = slope;
                prev2 = slope2;
            }
        }

        return ans;
    }
};