class Solution {
    public void setZeroes(int[][] matrix) {
        ArrayList<Integer> ans = new ArrayList<Integer>();
        int m = matrix.length;
        int n = matrix[0].length;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    ans.add(i);
                    ans.add(j);
                }
            }
        }

        int k = ans.size();

        for(int i=0;i<k;i++){

            if(i%2==0){
                for(int j=0;j<n;j++){
                matrix[ans.get(i)][j]=0;
                }
            } else {
                for(int j=0;j<m;j++){
                    matrix[j][ans.get(i)]=0;
                }
            }
        }

        return;
    }
}