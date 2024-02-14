class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> ans;
        int n = nums.size();
        int k = 0;
        int i=0;
        int j=0;

        while((i<n or j<n) and ans.size()<n)
        {
            if(k%2==0)
            {
                while(nums[i]<0)
                {
                    i++;
                }

                ans.push_back(nums[i]);
                i++;
            }
            else
            {
                while(nums[j]>0)
                j++;

                ans.push_back(nums[j]);
                j++;
            }

            k++;
        }

        return ans;
    }
};