class MatrixZero {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        unordered_set<int> rows;
        unordered_set<int> cols;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == 0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(int i=0;i<n; i++){
            for (int j=0; j<m; j++){
                if(rows.count(i)>0 || cols.count(j)>0){
                    mat[i][j] = 0;
                }
            }
        }
    }
};
