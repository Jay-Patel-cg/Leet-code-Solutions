// Last updated: 12/07/2026, 14:30:47
// Sorting the Sentence - 1859
1class Solution {
2public:
3    string sortSentence(string s) {
4        vector<string> ans(10);
5        stringstream ss(s);
6        string word;
7
8        while (ss >> word) {
9            int pos = word.back() - '0';
10            word.pop_back();      // Remove the position digit
11            ans[pos] = word;
12        }
13
14        string result;
15
16        for (int i = 1; i <= 9; i++) {
17            if (!ans[i].empty()) {
18                if (!result.empty()) result += " ";
19                result += ans[i];
20            }
21        }
22
23        return result;
24    }
25};