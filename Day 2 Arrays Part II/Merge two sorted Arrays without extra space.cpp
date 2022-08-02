/*
Time Complexity: O(n*m)
Space Complexity: O(1)
Approach: Insertion Sort inspired
LeetCode: https://leetcode.com/submissions/detail/763219619/
*/
class Solution {
public:
void merge(vector<int>& a, vector<int> &b) {
    for (int i = 0; i < a.size(); ++i) {
      if (a[i] > b[0]) swap(a[i], b[0]);
      int b0 = b[0], j = 1;
      for (; j < b.size() && b0 > b[j]; ++j) {
        b[j - 1] = b[j];
      }
      b[j - 1] = b0;
    }
  }
};
