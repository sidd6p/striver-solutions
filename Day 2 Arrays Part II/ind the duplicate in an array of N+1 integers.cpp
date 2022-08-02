/*
Time Complexity: O(n)
Space Complexity: O(n)
Approach: Store visited
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> freq;
        
        for (auto &num : nums) {
            if (freq.find(num) != freq.end()) return num;
            freq.insert(num);
        }
        
        return -1;
    }
};

/*
Time Complexity: O(n)
Space Complexity: O(1)
Approach: Floyd’s Cycle-Finding Algorithm
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        
        fast = nums[0];
        
        while (slow != fast) {
            fast = nums[fast];
            slow = nums[slow];
        }
        
        return fast;
    }
};