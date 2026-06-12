class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            int last = matrix[i].size() - 1;
            if (matrix[i][last] >= target) {
                return binary_search(matrix[i].begin(), matrix[i].end(), target);
            }
        }
        return 0;
    }
};
