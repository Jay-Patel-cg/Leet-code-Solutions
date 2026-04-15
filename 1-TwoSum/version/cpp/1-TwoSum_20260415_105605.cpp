// Last updated: 15/04/2026, 10:56:05
// First Unique Character in a String -> Problem number -> 387
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        unordered_map<char, int> freq;
5
6        for(char ch : s){
7            freq[ch]++; 
8        }
9
10        for(int i=0; i<s.size(); i++){
11            if(freq[s[i]] == 1){
12                return i;
13            }
14        }
15        return -1;
16    }
17};