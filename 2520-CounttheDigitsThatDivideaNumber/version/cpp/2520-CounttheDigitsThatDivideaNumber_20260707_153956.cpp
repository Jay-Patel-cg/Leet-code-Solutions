// Last updated: 07/07/2026, 15:39:56
// A Number After a Double Reversal - 2119
1class Solution {
2public:
3    bool isSameAfterReversals(int num) {
4        return (num == 0 || num % 10 != 0);
5    }
6};