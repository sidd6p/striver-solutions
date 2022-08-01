// /*
// Time Complexity: O(n)
// Space Complexity: O(1)
// Approach: Kadane
// */

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int curMax = nums[0], sol = nums[0];
        
//         for (int i = 1; i < nums.size(); ++i) {
//             curMax = max(curMax + nums[i], nums[i]);
//             sol = max(sol, curMax);
//         }
        
//         return sol;
//     }
// };


/*
Time Complexity: O(n)
Space Complexity: O(1)
Approach: Kadane
*/


int maxSubArray1(vector<int> &nums) {
    int maxSoFar = INT_MIN, maxEndingHere = 0;

    for (int i = 0; i < nums.size(); ++i) {
        maxEndingHere += nums[i];
        maxSoFar = max(maxSoFar, maxEndingHere);
        maxEndingHere = max(0, maxEndingHere);
    }

    return maxSoFar;
}