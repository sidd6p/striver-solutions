/*
Time Complexity: O(n)
Space Complexity: (n)
Approach: Counting
*/

class Solution {
public:
    vector<int> find_missing_repeating(vector<int> array) {
        vector<int> freq(n, 0), sol;

        for (int i = 0; i < array.size(); ++i) freq[array[i]]++;

        for (int i = 1; i <= array.size(); i++) {
            if (freq[i] == 0 || freq[i] > 1)  sol.push_back(i);
        }

        return sol;
    }
};