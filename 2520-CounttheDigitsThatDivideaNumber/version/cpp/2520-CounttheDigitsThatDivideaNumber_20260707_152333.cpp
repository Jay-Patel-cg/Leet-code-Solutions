// Last updated: 07/07/2026, 15:23:33
// Count the Digits That Divide a Number -2520
1class Solution {
2public:
3    int countDigits(int num) {
4        int original = num;
5        int count = 0;
6
7        while (num > 0) {
8            int digit = num % 10;
9
10            if (original % digit == 0) {
11                count++;
12            }
13
14            num /= 10;
15        }
16
17        return count;
18    }
19};