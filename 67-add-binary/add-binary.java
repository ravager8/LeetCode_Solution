class Solution {
    public String addBinary(String a, String b) {
        int n = a.length();
        int m = b.length();
        int carry = 0;
        String ans = "";

        int diff = Math.abs(n-m);

        while(n>0 && m>0){
            System.out.println(n+" "+m + " " + carry);
            if(a.charAt(n-1)=='1' && b.charAt(m-1)=='1'){
                if(carry == 1) ans = '1' + ans;
                else {
                    ans = '0' + ans;
                    carry = 1;
                }
            } else if((a.charAt(n-1)=='1' && b.charAt(m-1)=='0') || (a.charAt(n-1)=='0' && b.charAt(m-1)=='1')){
                if(carry == 1){
                    ans = '0' + ans;
                } else {
                    ans = '1' + ans;
                }
            } else{
                if(carry == 1) ans = '1' + ans;
                else ans = '0' + ans;
                carry = 0;
            }

            n--;
            m--;
        }

        while(n>0){
            if(carry==1) {
                if(a.charAt(n-1)=='1') ans = '0' + ans;
                else{
                    ans = '1' + ans;
                    carry = 0;
                }
            }
            else{
                ans = a.charAt(n-1) + ans;
            }
            n--;
        }

        while(m>0){
            // System.out.println(m + " " + carry);
            if(carry==1) {
                if(b.charAt(m-1)=='1') {
                    ans = '0' + ans;
                }
                else{
                    ans = '1' + ans;
                    carry = 0;
                }
            }
            else{
                ans = b.charAt(m-1) + ans;
            }
            m--;
            // System.out.println(m + " " + carry);
        }

        if(carry!=0)
        return '1' + ans;
        return ans;
    }
}