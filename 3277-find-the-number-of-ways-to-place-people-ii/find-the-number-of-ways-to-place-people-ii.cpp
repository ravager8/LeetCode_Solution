class Solution {
public:
    static bool compare(vector<int> &a,vector<int> &b)
    {
        if(a[0] < b[0])
        return true;
        else if(a[0]>b[0])
        return false;
        
        return a[1] >= b[1];
    }

    int numberOfPairs(vector<vector<int>>& points) 
    {
        int n = points.size();
        int ans = 0;

        sort(points.begin(),points.end(),compare);

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(i==j)
                continue;

                int x1 = points[i][0];
                int y1 = points[i][1];

                int x2 = points[j][0];
                int y2 = points[j][1];

                if((x2-x1)>=0 and (y1-y2)>=0)
                {
                    bool flag = true;

                    for(int k=i+1;k<n;k++)
                    {
                        if(k==i or k==j)
                        continue;

                        int x3 = points[k][0];
                        int y3 = points[k][1];

                        if(x3>=x1 and x3<=x2 and y3>=y2 and y3<=y1)
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