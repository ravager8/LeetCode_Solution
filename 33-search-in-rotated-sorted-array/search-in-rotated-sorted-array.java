class Solution {
    public int search(int[] nums, int target) {
        int j = nums.length-1;
        int i = 0;
        int mid;

        while(j>=i){
            mid = i + (j-i)/2;
            if(nums[mid]==target) return mid;

            if(nums[mid]>=nums[i]){
                if(nums[i]<=target && nums[mid]>target) j = mid-1;
                else i = mid+1;
            } else {
                if(nums[i]>target && nums[mid]<target) i = mid+1;
                else j = mid-1;
            }
        }

        return -1;
    }
}