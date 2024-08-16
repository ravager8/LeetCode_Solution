class Solution {

    public void rotation(int l,int r,int[] nums) {


        while(l<r){
            int temp = nums[r];
            nums[r] = nums[l];
            nums[l] = temp;

            l++;
            r--;
        }

        return;
    }

    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k%n;

        rotation(0,n-k-1,nums);
        rotation(n-k,n-1,nums);
        rotation(0,n-1,nums);
        
        return;
    }
}