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


/*
Time Complexity: (n)
Space Complexity: O(1)
Approach: Modified Boyer-Moore Majority Voting
LeetCode: https://leetcode.com/submissions/detail/767369100/
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if (nums.size() < 2) return nums;

        int th = nums.size() / 3, cand1 = -1, cand2 = -1, count1 = 0, count2 = 0;
        
        for (auto &num : nums) {
            if (num == cand1) ++count1;
            else if (num == cand2) ++count2;
            else {
                if (count1 == 0) cand1 = num, ++count1;
                else if (count2 == 0) cand2 = num, ++count2;
                else --count1, --count2;
            }
        }
        
        count1 = count2 = 0;
        
        for (auto &num : nums) {
            if (num == cand1) ++count1;
            else if (num == cand2) ++count2;
        }
        
        if (count1 > th && count2 > th) return {cand1, cand2};
        else if (count1 > th) return {cand1};
        else if (count2 > th) return {cand2};
        else return {};
        
    }
};