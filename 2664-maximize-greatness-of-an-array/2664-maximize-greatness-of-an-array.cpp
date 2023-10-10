class Solution {
public:
    int maximizeGreatness(vector<int>& nums) 
    {
        int n = nums.size();
        
        sort(nums.begin(),nums.end());

        int low = 0;
        int high = 1;
        int ans = 0;

        while(high<n)
        {
            while(high<n and nums[low]>=nums[high])
            {
                high++;
            }

            if(high>=n)
            break;

            low++;
            high++;
            ans++;
        }
        
        return ans;
    }
};