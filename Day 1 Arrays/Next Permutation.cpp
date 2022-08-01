/*
Time complexity: O(n)
Space Complexity: O(1)
Approach: In-built function
*/
// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         next_permutation(nums.begin(), nums.end());
//     }
// };


/*
Time complexity: O(n)
Space Complexity: O(1)
Approach: Two-pointer
*/
// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int idx = nums.size() - 2;
//         while (idx >= 0 && nums[idx] >= nums[idx + 1]) --idx;
//         if (idx < 0) reverse(nums.begin(), nums.end());
//         else {
//             for (int i = nums.size() - 1; i > idx; --i) {
//                 if (nums[i] > nums[idx]) {
//                     swap(nums[i], nums[idx]);
//                     break;
//                 }
//             }
//             reverse(nums.begin() + idx + 1, nums.end());
//         }
//     }
// };


/*
Time complexity: O(nlogn)
Space Complexity: O(1)
Approach: Two-pointer 
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int sz = nums.size();
        int l = 0;
    
        for (int i = sz - 1; i >= 1; i--) {
            if (nums[i] > nums[i - 1]) {
                l = i;
                break ;
            }
        }
        
        sort(nums.begin() + l, nums.end());
        if (l != 0) {
            auto lw = upper_bound(nums.begin() + l, nums.end(), nums[l - 1]) - nums.begin();
            swap(nums[l - 1], nums[lw]);            
        }
        
        return ;
    }
};
