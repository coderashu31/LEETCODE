class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        // Create a copy of the original matrix to track zero positions
        vector<vector<int>> temp = matrix; 
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (temp[i][j] == 0) {
                    // Set entire row to zero
                    for (int k = 0; k < n; k++) matrix[i][k] = 0;
                    // Set entire column to zero
                    for (int k = 0; k < m; k++) matrix[k][j] = 0;
                }
            }
        }
    }
};
