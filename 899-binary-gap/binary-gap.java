class Solution {
    public int binaryGap(int n) {
        int ans = 0;
        int prev = -1;
        int curr = -1;
        int x;
        
        while(n>0){
            x = n&1;
            curr++;
            if(x==1 && prev!=-1){
                ans = Math.max(ans,curr-prev);
                prev = curr;
            } else if(x==1) {
                prev = curr;
            } 
            n = n>>1;
        }

        return ans;
    }
}