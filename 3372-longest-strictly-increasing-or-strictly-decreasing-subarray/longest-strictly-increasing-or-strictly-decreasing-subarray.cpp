class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) 
    {
        int ans = 0;
        int inc = 1;
        int dec = 1;

        int n = nums.size();
        int temp1 = nums[0];
        int temp2 = nums[0];
        int incl = 1;
        int decl = 1;

        for(int i=1;i<n;i++)
        {
            if(nums[i]>temp1)
            {
                temp1 = nums[i];
                incl ++;
            }
            else
            {
                temp1 = nums[i];
                incl = 1;
            }

            if(nums[i]<temp2)
            {
                temp2 = nums[i];
                decl ++;
            }
            else
            {
                temp2 = nums[i];
                decl = 1;
            }

            inc = max(inc,incl);
            dec = max(dec,decl);
        }

        return max(inc,dec);
    }
};