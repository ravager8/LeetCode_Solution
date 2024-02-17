class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) 
    {
        int n = points.size();
        int ans = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                continue;

                int x1 = points[i][0];
                int y1 = points[i][1];

                int x2 = points[j][0];
                int y2 = points[j][1];

                if((x1-x2)>=0 and (y2-y1)>=0)
                {
                    bool flag = true;

                    for(int k=0;k<n;k++)
                    {
                        if(k==i or k==j)
                        continue;

                        int x3 = points[k][0];
                        int y3 = points[k][1];

                        if(x3>=x2 and x3<=x1 and y3>=y1 and y3<=y2)
                        {
                            flag = false;
                            break;
                        }
                    }

                    if(flag)
                    ans++;
                }
            }
        }

        return ans;
    }
};