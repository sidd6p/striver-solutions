/*
Time Complexity: O(nlogn)
Space Complexity: (n^2)
Approach: Sorting & Two-Pointer
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> sol;
        bool last = false;
        
        sort(intervals.begin(), intervals.end());
        int left = intervals[0][0], right = intervals[0][1], idx = 1;
        
        while (idx < intervals.size()) {
            if (intervals[idx][0] > right) {
                sol.push_back({left, right});
                left = intervals[idx][0];
                right = intervals[idx][1]; 
                if (idx == intervals.size()) last = true;
            }
            else {
                right = max(right, intervals[idx][1]);    
            }
            ++idx;
        }
        
        if (!last) sol.push_back({left, right});
        
        return sol;
    }
};




/*
Time Complexity: O(nlogn)
Space Complexity: (1)
Approach: Sorting & Two-Pointer
*/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        bool last = false;
        
        sort(intervals.begin(), intervals.end());
        int left = intervals[0][0], right = intervals[0][1], idx = 1, lastIdx = 0;;
        
        while (idx < intervals.size()) {
            if (intervals[idx][0] > right) {
                intervals[lastIdx++] = {left, right};
                left = intervals[idx][0];
                right = intervals[idx][1]; 
                if (idx == intervals.size()) last = true;
            }
            else {
                right = max(right, intervals[idx][1]);    
            }
            ++idx;
        }
        
        if (!last) intervals[lastIdx++] = {left, right};
        intervals.resize(lastIdx);
        
        return intervals;
    }
};