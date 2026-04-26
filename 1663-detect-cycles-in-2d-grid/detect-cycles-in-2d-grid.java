class Solution {
    static int[][] direction = { {0,-1}, {0,1}, {-1,0}, {1,0}};

    private static boolean dfs(int r, int c, int pr, int pc, char[][] grid, boolean[] visited, int m, int n){
        visited[r*n + c] = true;

        for(int[] d:direction){
            int row = r + d[0];
            int col = c + d[1];

            if(row!=pr || col!=pc){
                if(row>=0 && row<m && col>=0 && col<n){
                    if(grid[row][col] == grid[r][c]){
                        if(visited[row * n + col] || dfs(row,col,r,c,grid,visited,m,n)){
                            return true;
                        }
                    }
                }
            }
        }
        return false;
    }

    public boolean containsCycle(char[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        boolean[] visited = new boolean[m*n];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i*n + j] && dfs(i,j,-1,-1,grid,visited,m,n)) return true;
            }
        }

        return false;
    }
}