// Last updated: 07/07/2026, 15:28:53
// Smallest Even Multiple - 2413
1class Solution {
2public:
3    int smallestEvenMultiple(int n) {
4        if (n % 2 == 0)
5            return n;
6
7        return n * 2;
8    }
9};