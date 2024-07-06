class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();

        int mn_row = 1e5;
        int mx_row = -1;
        int mn_col = 1e5;
        int mx_col = -1;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    mn_row = min(mn_row,i);
                    mn_col = min(mn_col,j);

                    mx_row = max(mx_row,i);
                    mx_col = max(mx_col,j);
                }
            }
        }

        return ((mx_row-mn_row+1)*(mx_col-mn_col+1));
    }
};