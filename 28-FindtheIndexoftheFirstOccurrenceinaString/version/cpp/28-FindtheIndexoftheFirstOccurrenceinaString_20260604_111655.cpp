// Last updated: 04/06/2026, 11:16:55
// Find the Index of the First Occurrence in a String - 28 (C++)
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int n = haystack.size();
5        int m = needle.size();
6
7        for (int i = 0; i <= n - m; i++) {
8            int j = 0;
9
10            while (j < m && haystack[i + j] == needle[j]) {
11                j++;
12            }
13
14            if (j == m) {
15                return i;
16            }
17        }
18
19        return -1;
20    }
21};