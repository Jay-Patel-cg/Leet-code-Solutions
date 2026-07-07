// Last updated: 07/07/2026, 15:34:48
// To Lower Case - 709
1class Solution {
2public:
3    string toLowerCase(string s) {
4        for (char &ch : s) {
5            ch = tolower(ch);
6        }
7
8        return s;
9    }
10};