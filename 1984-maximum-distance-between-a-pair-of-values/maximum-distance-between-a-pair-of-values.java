class Solution {
    // public int binarySearch(int start, int end,int target, int[] nums2){
    //     int curr = start-1;

    //     while(start<=end){
    //         int mid = start + (end - start) / 2;

    //         if(nums2[mid]>=target) {
    //             start = mid+1;
    //             curr = mid;
    //         }
    //         else end = mid - 1;
    //     }

    //     return curr;
    // }

    public int maxDistance(int[] nums1, int[] nums2) {
        // int ans = 0;
        // int curr = 0;
        // int n = nums1.length;
        // int m = nums2.length;

        // for(int i=0;i<n && i<m;i++){
        //     curr = binarySearch(i,m-1,nums1[i],nums2);
        //     ans = Math.max(ans,curr-i);
        // }

        // return ans;

        int ans = 0;
        int n = nums1.length;
        int m = nums2.length;
        int i = 0;
        int j = 0;

        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                ans = Math.max(ans,j-i);
                j++;
            } else {
                j++; 
                i++;
            }
        }
        return ans;
    }
}