// Last updated: 09/05/2026, 01:02:54
// Power of Three - 326
1class Solution {
2public:
3    bool isPowerOfThree(int n) {
4        if(n <= 0) return false;
5
6        while(n % 3 ==0){
7            n /= 3;
8        }
9        return n == 1;
10    }
11};