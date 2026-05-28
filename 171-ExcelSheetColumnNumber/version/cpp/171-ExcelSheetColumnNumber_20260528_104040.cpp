// Last updated: 28/05/2026, 10:40:40
// Excel Sheet Column Number - 171
1class Solution {
2public:
3    int titleToNumber(string columnTitle) {
4        int result = 0;
5
6        for(char ch : columnTitle) {
7            result = result * 26 + (ch - 'A' + 1);
8        }
9
10        return result;
11    }
12};