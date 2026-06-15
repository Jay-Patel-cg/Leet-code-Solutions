// Last updated: 15/06/2026, 11:52:27
// Check if All Characters Have Equal Number of Occurrences - 1941
1class Solution {
2public:
3    bool areOccurrencesEqual(string s) {
4        vector<int> freq(26, 0);
5
6        for (char ch : s) {
7            freq[ch - 'a']++;
8        }
9
10        set<int> st;
11
12        for (int count : freq) {
13            if (count > 0) {
14                st.insert(count);
15            }
16        }
17
18        return st.size() == 1;
19    }
20};