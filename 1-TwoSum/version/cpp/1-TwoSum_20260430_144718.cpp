// Last updated: 30/04/2026, 14:47:18
// Number of Changing Keys -> problem Number -> 3019
1class Solution {
2public:
3    int countKeyChanges(string s) {
4        int count = 0;
5        for(int i = 1 ; i<s.length(); ++i){
6            if(tolower(s[i]) != tolower(s[i-1])){
7                ++count;
8            }
9        }
10        return count;
11    }
12};