// Last updated: 11/07/2026, 22:26:55
// Number of Steps to Reduce a Number to Zero - 1342
1class Solution {
2public:
3    int numberOfSteps(int num) {
4        int steps = 0;
5
6        while (num > 0) {
7            if (num % 2 == 0) {
8                num /= 2;
9            } else {
10                num -= 1;
11            }
12            steps++;
13        }
14
15        return steps;
16    }
17};