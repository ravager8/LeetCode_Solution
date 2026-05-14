class Solution {
    public boolean isGood(int[] nums) {
        int n = nums.length;
        int x = n;

        for(int i=0;i<n;i++){

            int index = nums[i]%x - 1;
            if(index<0 || index>=n) return false;
            nums[index] += x;
        }

        if(nums[n-2]/x!=2) return false;
        if(nums[n-1]/x!=0) return false;

        for(int i=0;i<n-2;i++){
            if(nums[i]/x==1) continue;
            return false;
        }

        return true;
    }
}