class Solution {
    public long sumAndMultiply(int n) {
        long sum = 0;
        String temp = "";

        if(n==0) return 0;

        while(n>0){
            long x = n%10;

            if(x>0) {
                sum+=x;
                temp = String.valueOf(x) + temp;
            }

            n/=10;
        }

        long ans = Long.parseLong(temp);
        return ans*sum;
    }
}