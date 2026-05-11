// Last updated: 12/05/2026, 01:44:20
// Reverse Integer - 7
1class Solution {
2public:
3    int reverse(int x) {
4        int rev = 0;
5
6        while(x != 0) {
7            int digit = x % 10;
8
9            if(rev > INT_MAX / 10 || rev < INT_MIN / 10) {
10                return 0;
11            }
12
13            rev = rev * 10 + digit;
14            x /= 10;
15        }
16
17        return rev;
18    }
19};