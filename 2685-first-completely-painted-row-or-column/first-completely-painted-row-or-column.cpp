class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        int k = arr.size();
        int n = mat.size();
        int m = mat[0].size();
        unordered_map<int,int> col;
        unordered_map<int,int> row;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                row[mat[i][j]] = i;
                col[mat[i][j]] = j;
            }
        }

        vector<int> r(n,0);
        vector<int> c(m,0);

        for(int i=0;i<k;i++){

            cout<<r[row[arr[i]]]++<<endl;
            cout<<c[col[arr[i]]]++<<endl;

            if(r[row[arr[i]]]==m) return i;
            if(c[col[arr[i]]]==n) return i;
        }

        return 0;
    }

    // 4 3 5
    // 1 2 6
};