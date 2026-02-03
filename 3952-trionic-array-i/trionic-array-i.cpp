class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int p = -1;
        int q = n-1;
        int x = n-1;

        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]) continue;
            else{
                p = i-1;
                break;
            }
        }

        if(p<=0 || p>=n-2) return false;

        for(int i=p+1;i<n;i++){
            if(nums[i]<nums[i-1]) continue;
            else{
                q = i-1;
                break;
            }
        }

        if(q>=n-1) return false;

        for(int i=q+1;i<n;i++){
            if(nums[i]>nums[i-1]) continue;
            else{
                x = i-1;
                break;
            }
        }

        if(x!=n-1) return false;

        return true;
    }
};