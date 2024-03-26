class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n = nums.size();
        int mx = 1e5+2;

        for(int i=0;i<n;i++)
        {
            // if(nums[i]>mx)
            // mx = nums[i];

            if(nums[i]<0)
            nums[i]=0;
            else if(nums[i]>=mx)
            nums[i] = mx-1;
        }

        // mx++;

        for(int i=0;i<n;i++)
        {
            int k = nums[i]%mx;

            if(k>0 and k<=n)
            {
                if(nums[k-1]/mx == 0)
                nums[k-1] += mx;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]/mx <= 0)
            return i+1;
        }

        return n+1;
    }
};