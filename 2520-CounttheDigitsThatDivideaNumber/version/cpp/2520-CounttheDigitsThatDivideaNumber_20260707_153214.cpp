// Last updated: 07/07/2026, 15:32:14
// Minimum Sum of Four Digit Number After Splitting Digits - 2160
1class Solution {
2public:
3    int minimumSum(int num) {
4        vector<int> digits;
5
6        while (num > 0) {
7            digits.push_back(num % 10);
8            num /= 10;
9        }
10
11        sort(digits.begin(), digits.end());
12
13        int new1 = digits[0] * 10 + digits[2];
14        int new2 = digits[1] * 10 + digits[3];
15
16        return new1 + new2;
17    }
18};