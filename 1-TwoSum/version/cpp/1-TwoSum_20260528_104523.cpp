// Last updated: 28/05/2026, 10:45:23
// Reverse Prefix of Word -2000
1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4        
5        int idx = word.find(ch);
6
7        // If character not found
8        if(idx == string::npos) {
9            return word;
10        }
11
12        reverse(word.begin(), word.begin() + idx + 1);
13
14        return word;
15    }
16};