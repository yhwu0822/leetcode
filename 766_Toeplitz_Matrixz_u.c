class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (int i = 1; i < matrix.size() ; i++){
            for (int j = (matrix[0].size())-1; j > 0; j--)
                matrix[i-1][j] = matrix[i-1][j-1];
            matrix[i-1][0] = matrix[i][0];
            if (matrix[i-1] != matrix[i])
                return false;
        }
        return true;
    }
};

//用本來就有的space去記