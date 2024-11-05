class Solution {
    public int minChanges(String s) {
        
        int n = s.length();
        int cnt0 = 0;
        int cnt1 = 0;
        int ans = 0;

        for(int i=0;i<n;i++){

            if(s.charAt(i)=='0') cnt0++;
            else cnt1++;

            // System.out.println(cnt0+" "+cnt1);

            if(i%2!=0){
                if((Math.abs(cnt0-cnt1))!=2) ans++;
                cnt0 = 0;
                cnt1 = 0;
            }
        }

        return ans;
    }
}