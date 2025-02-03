class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int sI = 1;
        int prevsI = nums[0];
        int sD = 1;
        int prevsD = nums[0];
        int n = nums.size();
        int ans = 1;

        for(int i=1;i<n;i++){

            if(nums[i]>prevsI){
                sI++;
            } else{
                ans = max(ans,sI);
                sI = 1;
            }
            
            if(nums[i]<prevsD){
                sD++;
            } else{
                ans = max(ans,sD);
                sD = 1;
            }

            prevsI = nums[i];
            prevsD = nums[i];
        }

        return max(ans,max(sI,sD));
    }
};