class Solution {
    public int countSeniors(String[] details) {
        
        int n = details.length;
        int ans = 0;

        for(int i=0;i<n;i++){

            String temp = "";
            temp = details[i].substring(11,13);
            // char age1 = details[i].charAt(11);
            // char age2 = details[i].charAt(12);

            int num = Integer.parseInt(temp);

            if(num>60) ans++;
        }

        return ans;
    }
}