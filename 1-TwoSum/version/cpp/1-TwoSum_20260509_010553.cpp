// Last updated: 09/05/2026, 01:05:53
// Power of Four - 342
1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        if( n <=0 ) return false;
5
6        while(n%4==0){
7            n /= 4;
8        };
9        return n == 1;
10    }
11};