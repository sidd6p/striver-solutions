/*
Time Complexity: O(n)
Space Complexity: O(1)
Approach: In-built function
LeetCode: https://leetcode.com/submissions/detail/765026710/
*/

class Solution {
public:
    double myPow(double x, int n) {
        return (double)(pow(x, n) + 1e-9);
    }
};



/*
Time Complexity: O(logn)
Space Complexity: O(1)
Approach:  Binary exponentiation
LeetCode: https://leetcode.com/submissions/detail/765030055/
*/

class Solution {
public:
    double myPow(double x, int n) {
        double sol = 1.0;
        long long myN = abs(n);
        while (myN) {
            if (myN % 2) {
                sol *= x;
                myN -= 1;
            }
            else {
                x *= x;
                myN /= 2;
            }
        }
        if (n < 0) sol = double(1.0) / double(sol);
        return sol;
    }
};