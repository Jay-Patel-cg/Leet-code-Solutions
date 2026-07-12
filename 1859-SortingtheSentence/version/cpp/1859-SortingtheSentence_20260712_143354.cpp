// Last updated: 12/07/2026, 14:33:54
// Reverse Words in a String III - 557
1class Solution {
2public:
3    string reverseWords(string s) {
4        int start = 0;
5
6        for (int i = 0; i <= s.size(); i++) {
7            if (i == s.size() || s[i] == ' ') {
8                reverse(s.begin() + start, s.begin() + i);
9                start = i + 1;
10            }
11        }
12
13        return s;
14    }
15};