class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        // HashMap<Integer,Integer> mp = new HashMap<Integer,Integer>();
        int n = A.length;
        int[] ans = new int[n];
        int[] freq = new int[n];
        int total = 0;

        for(int i=0;i<n;i++){
            // mp.put(A[i],mp.getOrDefault(A[i],0)+1);
            // if(mp.get(A[i])==2) total++;
            // mp.put(B[i],mp.getOrDefault(B[i],0)+1);
            // if(mp.get(B[i])==2) total++;

            freq[A[i]-1]++;
            if(freq[A[i]-1]==2) total++;
            freq[B[i]-1]++;
            if(freq[B[i]-1]==2) total++;

            ans[i] = total;
        }

        return ans;
    }
}