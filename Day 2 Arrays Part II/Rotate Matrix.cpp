/*
Time Complexity: O(n^n)
Space Complexity: O(1)
Approach: Transpose and then reverse it
LeetCode: https://leetcode.com/submissions/detail/763219619/
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j <= i; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < matrix.size(); ++i) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};



/*
Time Complexity: O(n^n)
Space Complexity: O(1)
Approach: Transpose and then reverse it
LeetCode: https://leetcode.com/submissions/detail/763221639/
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j <= i; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[0].size() / 2; ++j) {
                swap(matrix[i][j], matrix[i][matrix[0].size() - j - 1]);
            }
        }
    }
};