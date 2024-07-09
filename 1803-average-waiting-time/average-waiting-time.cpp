class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) 
    {
        double ans = 0;
        int n = customers.size();
        int curr_t = customers[0][0];

        for(int i=0;i<n;i++)
        {
            curr_t += customers[i][1];

            if(customers[i][0]+customers[i][1]<=curr_t)
            ans += (curr_t - customers[i][0]);
            else
            {
                ans += (customers[i][1]);
                curr_t = customers[i][0]+customers[i][1];
            }
        }

        return ans/n;
    }
};