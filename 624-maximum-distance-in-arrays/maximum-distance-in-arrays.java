class Solution {
    public int maxDistance(List<List<Integer>> arrays) {
        
        int n = arrays.size();
        int ans = 0;
        int mx = arrays.get(0).get(arrays.get(0).size()-1);
        int mn = arrays.get(0).get(0);

        for(int i=1;i<n;i++){

            int a = arrays.get(i).get(0);
            int b = arrays.get(i).get(arrays.get(i).size()-1);

            ans = Math.max(ans,Math.max(Math.abs(mx-a),Math.abs(mn-b)));

            if(mx<b) mx = b;
            if(mn>a) mn = a;
        }

        return ans;
    }
}