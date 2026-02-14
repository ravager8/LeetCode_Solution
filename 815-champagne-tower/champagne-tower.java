class Solution {
    public double champagneTower(int poured, int query_row, int query_glass) {
        
        double[][] pyramid = new double[query_row+2][query_row+2];
        pyramid[0][0] = (double) poured;

        for(int i=0;i<=query_row;i++){
            for(int j=0;j<=i;j++){
                if(pyramid[i][j]>1.0){
                    double extra = pyramid[i][j]-1.0;
                    pyramid[i][j]=1.0;
                    pyramid[i+1][j] += extra/2.0;
                    pyramid[i+1][j+1] += extra/2.0;
                }
            }
        }

        return pyramid[query_row][query_glass];
    }
}



// 1st row -> 1 cups -> a[i]
// 2nd row -> 3 cups -> a[i-1] + 2 * a[i]
// 3rd row full and 4th row 2 glass half filled -> 7 cups -> a[i-1] * 2 a[i-1]; for this row to fill all glass.  
// same pattern should follow