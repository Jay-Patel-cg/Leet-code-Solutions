// Last updated: 12/07/2026, 14:35:10
// Replace All Digits with Characters - 1844
1class Solution {
2public:
3    string replaceDigits(string s) {
4        for (int i = 1; i < s.size(); i += 2) {
5            s[i] = s[i - 1] + (s[i] - '0');
6        }
7
8        return s;
9    }
10};