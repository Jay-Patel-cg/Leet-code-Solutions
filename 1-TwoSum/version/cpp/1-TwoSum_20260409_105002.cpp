// Last updated: 09/04/2026, 10:50:02
// Reverse Only Letters -> Problem Number -> 917
1class Solution {
2public:
3    string reverseOnlyLetters(string s) {
4        int l = 0;
5        int r = s.size() - 1;
6
7        while (l < r) {
8            if (!isalpha(s[l])) {
9                l++;
10            }
11            else if (!isalpha(s[r])) {
12                r--;
13            }
14            else {
15                swap(s[l], s[r]);
16                l++;
17                r--;
18            }
19        }
20        return s;
21    }
22};