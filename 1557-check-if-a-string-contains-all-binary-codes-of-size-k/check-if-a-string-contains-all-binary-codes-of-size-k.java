class Solution {
    public boolean hasAllCodes(String s, int k) {
        Set<String> freq = new HashSet<String> ();
        int n = s.length();

        for(int i=0;i<n-k+1;i++){
            String window = s.substring(i,i+k);
            freq.add(window);
            if(freq.size()==Math.pow(2,k)) return true;
        }

        return false;
    }
}