class Solution {
public:
    int minDifference(vector<int>& nums) 
    {
        if(nums.size()<=4)
        return 0;

        int mx1=-1e9-1,mx2=-1e9-1,mx3=-1e9-1,mx4=-1e9-1;
        int mn1=1e9+1,mn2=1e9+1,mn3=1e9+1,mn4=1e9+1;
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            if(nums[i]>mx1)
            {
                mx4 = mx3;
                mx3 = mx2;
                mx2 = mx1;
                mx1 = nums[i];
                // cout<<mx1<<endl;
            }
            else if(nums[i]>mx2)
            {
                mx4 = mx3;
                mx3 = mx2;
                mx2 = nums[i];
            }
            else if(nums[i]>mx3)
            {
                mx4 = mx3;
                mx3 = nums[i];
            }
            else if(nums[i]>mx4)
            mx4 = nums[i];


            if(nums[i]<mn1)
            {
                mn4 = mn3;
                mn3 = mn2;
                mn2 = mn1;
                mn1 = nums[i];
            }
            else if(nums[i]<mn2)
            {
                mn4 = mn3;
                mn3 = mn2;
                mn2 = nums[i];
            }
            else if(nums[i]<mn3)
            {
                mn4 = mn3;
                mn3 = nums[i];
            }
            else if(nums[i]<mn4)
            mn4 = nums[i];
        }

        // cout<<mx1<<" "<<mx2<<" "<<mx3<<" "<<mx4<<endl;
        // cout<<mn1<<" "<<mn2<<" "<<mn3<<" "<<mn4<<endl;

        int ans = min(mx1-mn4,min(mx4-mn1,min(mx3-mn2,mx2-mn3)));
        return ans;

        // sort(nums.begin(),nums.end());
        // int ans = INT_MAX;
        // int n = nums.size();

        // if(n<=4)
        // return 0;

        // int t1 = nums[n-4] - nums[0];
        // int t2 = nums[n-1] - nums[3];
        // int t3 = nums[n-2] - nums[2];
        // int t4 = nums[n-3] - nums[1];

        // ans = min(t1,min(t2,min(t3,t4)));
        // return ans;
    }
};