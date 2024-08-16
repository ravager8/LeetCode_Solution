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
        int right = n-k;
        int r = n-1;
        int left = 0;

        if(k==0 || k==n)
        return;

        rotation(0,right-1,nums);
        rotation(right,n-1,nums);

        while(left<r & r>left){
            int t = nums[r];
            nums[r] = nums[left];
            nums[left] = t;

            r--;
            left++;
        }
        
        return;
    }
}