class Solution {
    public int gcdOfOddEvenSums(int n) {
        int evenSum = 0;
        int oddSum = 0;

        for(int i=0;i<n;i++){
            oddSum += (i*2)+1;
            evenSum += (i*2)+2;
        }

        int diff = evenSum-oddSum;
        int ans = 1;

        while(diff>=2){
            if(oddSum%diff==0 && evenSum%diff==0){
                ans = diff;
                break;
            }
            diff--;
        }
        
        return ans;
    }
}