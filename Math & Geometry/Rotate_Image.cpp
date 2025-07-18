class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        reverse(matrix.begin(), matrix.end());

        for(int i = 0 ; i  < m; i++){
            for (int j = i+1 ; j < n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};

