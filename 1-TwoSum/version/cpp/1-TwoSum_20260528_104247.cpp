// Last updated: 28/05/2026, 10:42:47
// Number of Segments in a String - 434
1class Solution {
2public:
3    int countSegments(string s) {
4        int count = 0;
5
6        for(int i = 0; i < s.length(); i++) {
7            // Start of a new word
8            if(s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
9                count++;
10            }
11        }
12
13        return count;
14    }
15};