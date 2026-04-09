// Last updated: 09/04/2026, 09:50:51
// Reavrse a String Problem Nmber -> 344
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int i = 0, j = s.size() - 1;
5        while (i < j) {
6            swap(s[i++], s[j--]);
7        }
8    }
9};