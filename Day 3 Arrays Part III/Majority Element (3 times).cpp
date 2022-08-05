/*
Time Complexity: (n)
Space Complexity: O(n)
Approach: Brute Force with map
LeetCode: https://leetcode.com/submissions/detail/765871518/
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int th = nums.size() / 3;
        
        vector<int> sol;
        unordered_map<int, int> mp;
        
        for (auto &num : nums) mp[num]++;
        
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            if (it->second > th) sol.push_back(it->first);
        }
        
        return sol;
    }
};

