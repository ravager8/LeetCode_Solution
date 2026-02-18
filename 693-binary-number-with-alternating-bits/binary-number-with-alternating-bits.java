class Solution {
    public boolean hasAlternatingBits(int n) {
        
        if(n<=2) return true;
        int temp = n&1;
        n = n>>1;

        while(n>0){
            if(temp==(n&1)) return false;
            temp = n&1;
            n = n>>1;
        }

        return true;
    }
}