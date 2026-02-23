class Solution {
    public boolean hasAllCodes(String s, int k) {
        HashMap<String,Integer> freq = new HashMap<String,Integer> ();
        int n = s.length();

        for(int i=0;i<n-k+1;i++){
            String window = s.substring(i,i+k);
            freq.put(window,1);
        }

        if(freq.size()==Math.pow(2,k)) return true;
        return false;
    }
}