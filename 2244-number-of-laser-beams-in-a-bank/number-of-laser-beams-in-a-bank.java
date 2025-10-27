class Solution {
    public int numberOfBeams(String[] bank) {
        int n = bank.length;
        int m = bank[0].length();
        int prev = 0;
        int ans = 0;

        for(int i=0;i<n;i++){
            int count_1 = 0;
            for(int j=0;j<m;j++){
                if(bank[i].charAt(j)=='1') count_1++;
            }
            if(prev==0) prev = count_1;
            else ans += count_1 * prev;
            System.out.println(ans);
            if(count_1!=0) prev = count_1;
        }

        return ans;
    }
}