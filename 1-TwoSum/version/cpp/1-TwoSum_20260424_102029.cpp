// Last updated: 24/04/2026, 10:20:29
// Merge Strings Alternately - >Problem Number -> 1768
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        int i = 0;
5        int j = 0;
6        string ans = "";
7
8        while(i < word1.length() || j < word2.length() ){
9            if( i < word1.length()){
10                ans += word1[i];
11                ++i; 
12            } 
13            if( j < word2.length()){
14                ans += word2[j];
15                ++j;
16            }
17        }
18        return ans;
19    }
20};