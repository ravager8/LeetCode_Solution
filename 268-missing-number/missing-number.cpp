class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int cntn = 0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]%(n+1)==n)
            cntn = 1;
            else 
            {
                nums[nums[i]%(n+1)] += (n+1);
            }
        }

        if(cntn==0)
        return n;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]/(n+1)==0)
            return i;
        }

        return 0;
    }
};