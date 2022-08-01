/*
Time Complexity: O(n^2)
Space Complexity: O(((n)(n + 1)) / 2)
Approach: Brute Force
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol;
        sol.push_back({1});

        for (int i = 1; i < numRows; ++i) {
            vector<int> cur;
            for (int j = 0; j <= i; ++j) {
                if (j == 0 || j == i) {
                    cur.push_back(1);
                }
                else {
                    cur.push_back(sol[i - 1][j - 1] + sol[i - 1][j]);
                }
            }
            sol.push_back(cur);
        }

        return sol;
    }
};