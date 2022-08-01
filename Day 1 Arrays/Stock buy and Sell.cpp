/*
Time Complexity: O(n)
Space Complexity: O(1)
Approach: Native approach
LeetCode: https://leetcode.com/submissions/detail/632184612/
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curMin = INT_MAX, sol = 0;
        
        for (int i = 0; i < prices.size(); ++i) {
            curMin = min(curMin, prices[i]);
            sol = max(prices[i] - curMin, sol);
        }
        
        return sol;
            
    }
};