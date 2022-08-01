/*
Time Complexity: O(n)
Space Complexity: (1)
Approach: Dutch National Flag problem
LeetCode: https://leetcode.com/submissions/detail/762493257/
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0, right = nums.size() - 1, mid = 0;
        
        while (mid <= right) {
            if (nums[mid] == 0) {
                swap(nums[left], nums[mid]);
                ++left, ++mid;
            }
            else if (nums[mid] == 1) {
                ++mid;
            }
            else {
                swap(nums[right], nums[mid]);
                --right;
            }
        }
    }
};