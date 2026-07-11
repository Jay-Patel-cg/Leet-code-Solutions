// Last updated: 11/07/2026, 22:38:20
// Truncate Sentence - 1816
1class Solution {
2public:
3    string truncateSentence(string s, int k) {
4        int count = 0;
5
6        for (int i = 0; i < s.size(); i++) {
7            if (s[i] == ' ') {
8                count++;
9                if (count == k) {
10                    return s.substr(0, i);
11                }
12            }
13        }
14
15        return s;
16    }
17};