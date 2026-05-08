// Last updated: 09/05/2026, 00:59:25
// Power of Two - 231
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        return n >0 && (n & (n-1)) == 0;
5    }
6};