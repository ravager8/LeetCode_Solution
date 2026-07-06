class Solution {
    public static void sortIntervals(int[][] intervals){
        Arrays.sort(intervals, (a,b) -> {
            if(a[0] == b[0]) {
                return Integer.compare(b[1],a[1]);
            }

            return Integer.compare(a[0],b[0]);
        });
    }

    public int removeCoveredIntervals(int[][] intervals) {
        sortIntervals(intervals);

        int n = intervals.length;
        int ans = 1;
        int x = intervals[0][0];
        int y = intervals[0][1];

        for(int i=1;i<n;i++){
            int j = intervals[i][0];
            int k = intervals[i][1];

            if(x<=j && y>=k) continue;
            else{
                ans++;
                x = j;
                y = k;
            }
        }

        return ans;
    }
}