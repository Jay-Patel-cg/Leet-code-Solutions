// Last updated: 07/07/2026, 15:24:54
// Defanging an IP Address - 1108
1class Solution {
2public:
3    string defangIPaddr(string address) {
4        string ans = "";
5
6        for (char ch : address) {
7            if (ch == '.') {
8                ans += "[.]";
9            } else {
10                ans += ch;
11            }
12        }
13
14        return ans;
15    }
16};