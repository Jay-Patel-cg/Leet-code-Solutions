// Last updated: 28/05/2026, 10:45:39
// Reverse Prefix of Word -2000
1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4        
5        int idx = word.find(ch);
6        
7        if(idx == string::npos) {
8            return word;
9        }
10
11        reverse(word.begin(), word.begin() + idx + 1);
12
13        return word;
14    }
15};