// Last updated: 09/05/2026, 00:54:59
// Reverse Bits - 190
1class Solution {
2public:
3    int reverseBits(int n) {
4        unsigned int ans = 0;
5        
6        for(int i = 0; i < 32; i++) {
7            ans = (ans << 1) | (n & 1);
8            n >>= 1;
9        }
10        
11        return ans;
12    }
13};