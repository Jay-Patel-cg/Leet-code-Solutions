// Last updated: 30/04/2026, 14:31:29
// XOR Operation in an Array -> Problem Number -> 1486
1class Solution {
2public:
3    int xorOperation(int n, int start) {
4        int ans = 0;
5        for(int i = 0; i < n; i++){
6            ans ^= (start + 2 * i);
7        }
8        return ans;
9    }
10};