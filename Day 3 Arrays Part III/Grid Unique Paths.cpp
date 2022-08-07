/*
Time Complexity: O(m * n)
Space Complexity: O(m * n)
Approach: Dynamic Programming
LeetCode: https://leetcode.com/submissions/detail/767374312/
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n , 1));
        
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        
        return dp[m - 1][n - 1];
    }
};

/*
Time Complexity: O(m - 1)
Space Complexity: O(1)
Approach: We need m + n - 2 step in every solution
LeetCode: https://leetcode.com/submissions/detail/767379325/
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        double sol = 1;
        int N = m + n - 2, R = m - 1;
        
        for (int i = 1; i <= R; ++i) sol = sol * (N - R + i) / i;
        
        return (int)sol;
    }
};