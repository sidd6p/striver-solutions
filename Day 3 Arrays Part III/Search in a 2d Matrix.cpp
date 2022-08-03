/*
Time Complexity: O(max(n, m))
Space Complexity: O(1)
Approach: Binary Search
LeetCode: https://leetcode.com/submissions/detail/764284999/
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size() - 1, col = 0;
        
        while (row >= 0 && col < matrix[0].size()) {
            if (matrix[row][col] == target) return true;
            else if (matrix[row][col] > target) --row;
            else ++col;
        }
        
        return false;
    }
};