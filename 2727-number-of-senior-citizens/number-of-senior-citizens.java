class Solution {
    public int countSeniors(String[] details) {
        
        int n = details.length;
        int ans = 0;

        for(int i=0;i<n;i++){

            String temp = "";
            temp += details[i].charAt(11);
            temp += details[i].charAt(12);

            int num = Integer.parseInt(temp);

            if(num>60) ans++;
        }

        return ans;
    }
}