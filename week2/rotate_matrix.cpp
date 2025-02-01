class RotateMatrix {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m =matrix.size();
        int n = matrix[0].size();
        vector<vector<int>>final;
        for(int i=0;i<m;i++){
            vector<int>v;
            for(int j =0;j<n;j++){
                v.push_back(matrix[j][i]);
            }
            reverse(v.begin(),v.end());
            final.push_back(v);
        }
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = final[i][j];
            }
        }
        return;
    }
};
