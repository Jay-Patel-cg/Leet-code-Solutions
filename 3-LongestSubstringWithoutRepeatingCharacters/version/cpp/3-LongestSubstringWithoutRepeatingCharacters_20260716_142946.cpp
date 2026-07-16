// Last updated: 16/07/2026, 14:29:46
// Longest Substring Without Repeating Characters - 3
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int ans = 0;
5        for(int i = 0; i < s.size(); i++){
6            unordered_set<char>st;
7            for(int j = i; j<s.size();j++){
8                if(st.find(s[j]) != st.end()){
9                    break;
10                }
11                st.insert(s[j]);
12                ans = max(ans , j-i+1);
13            }
14        }
15        return ans;
16    }
17};