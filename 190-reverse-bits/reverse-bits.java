import java.math.BigInteger;
class Solution {
    public int reverseBits(int n) {
        int[] arr = new int[32];
        long num = (long) Math.pow(2, 31);
        long temp = n;

        for(int i=0;i<32;i++){
            if(temp >= num){
                temp-=num;
                arr[i]=1;
            }

            num/=2;
        }

        long ans = 0;

        for(int i=31;i>=0;i--){
            System.out.println(arr[i]);
            if(arr[i]==1){
                ans += (long) Math.pow(2,i);
            }
        }

        return (int) ans;
    }
}