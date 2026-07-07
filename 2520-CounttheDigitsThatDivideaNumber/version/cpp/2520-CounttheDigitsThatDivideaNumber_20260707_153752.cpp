// Last updated: 07/07/2026, 15:37:52
// Count Asterisks - 2315
1class Solution {
2public:
3    int countAsterisks(string s) {
4        int count = 0;
5        bool inside = false;
6
7        for (char ch : s) {
8            if (ch == '|') {
9                inside = !inside;
10            }
11            else if (ch == '*' && !inside) {
12                count++;
13            }
14        }
15
16        return count;
17    }
18};