// Last updated: 12/05/2026, 01:49:05
// Unique Morse Code Words - 804
1class Solution {
2public:
3    int uniqueMorseRepresentations(vector<string>& words) {
4        vector<string> morse = {
5            ".-","-...","-.-.","-..",".","..-.","--.","....","..",
6            ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
7            "...","-","..-","...-",".--","-..-","-.--","--.."
8        };
9
10        unordered_set<string> st;
11
12        for(string word : words) {
13            string temp = "";
14
15            for(char ch : word) {
16                temp += morse[ch - 'a'];
17            }
18
19            st.insert(temp);
20        }
21
22        return st.size();
23    }
24};