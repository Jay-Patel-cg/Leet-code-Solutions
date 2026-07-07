// Last updated: 07/07/2026, 15:47:48
// First Letter to Appear Twice - 2351
1class Solution {
2public:
3    char repeatedCharacter(string s) {
4        set<char> st;
5
6        for (char ch : s) {
7            if (st.count(ch)) {
8                return ch;
9            }
10
11            st.insert(ch);
12        }
13
14        return ' ';
15    }
16};