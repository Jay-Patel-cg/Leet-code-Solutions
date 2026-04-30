// Last updated: 30/04/2026, 15:03:43
// Add Digits -> problem number -> 258
1class Solution {
2public:
3    int addDigits(int num) {
4        if (num == 0) return 0;
5        return 1 + (num - 1) % 9;
6    }
7};