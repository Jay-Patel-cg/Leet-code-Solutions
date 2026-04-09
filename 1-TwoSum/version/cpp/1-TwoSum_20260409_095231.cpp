// Last updated: 09/04/2026, 09:52:31
// Problem number -> 344 With New code 100% Accuracy Reveres A String
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int i = 0, j = s.size() - 1;
5        while (i < j) {
6            swap(s[i], s[j]);
7            ++i;
8            --j;
9        }
10    }
11};