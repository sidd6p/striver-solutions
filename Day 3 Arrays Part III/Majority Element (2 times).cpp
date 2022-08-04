/*
Time Complexity: O(n)
Space Complexity: O(1)
Approach: majorityElement count will be more than any-other element count
LeetCode: https://leetcode.com/submissions/detail/765038053/
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int curE = nums[0], count = 1;
        
      for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == curE) ++count;
        else {
            --count;
            if (count == 0) {
                curE = nums[i];
                ++count;
            }
        }
      }

      return curE;  
    }
};