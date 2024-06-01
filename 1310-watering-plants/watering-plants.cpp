class Solution {
public:
    int wateringPlants(vector<int>& pt, int cty) 
    {
        int curr_cty = cty;
        int n = pt.size();
        int ans = 0;

        for(int i=0;i<n;i++)
        {
            if(curr_cty >= pt[i])
            {
                ans++;
                curr_cty -= pt[i];
            }
            else
            {
                ans += (2*i)+1;
                curr_cty = cty - pt[i];
            }
        }

        return ans;
    }
};