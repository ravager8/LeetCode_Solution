class Solution {
    public int countBinarySubstrings(String s) {
        int n = s.length();
        int ans = 0;
        int cnt0 = 0;
        int cnt1 = 0;
        if(s.charAt(0)=='0') cnt0++;
        else cnt1++;

        for(int i=1;i<n;i++){
            if(s.charAt(i)=='0') {
                if(s.charAt(i-1)==s.charAt(i)) cnt0++;
                else cnt0=1;

                if(cnt0<=cnt1) ans++;
            }
            else {
                if(s.charAt(i-1)==s.charAt(i)) cnt1++;
                else cnt1=1;

                if(cnt1<=cnt0) ans++;
            }
        }

        return ans;
    }
}