class Solution {
    public int partitionString(String s) {
        
        int n = s.length();
        int ans = 0;
        int i = 0;

        while(i<n){

            int arr[] = new int[26];
            while(i<n){

                arr[s.charAt(i)-'a']++;
                if(arr[s.charAt(i)-'a']>1){
                    ans++;
                    break;
                }
                i++;
            }
        }

        return ans+1;
    }
}