// Last updated: 08/08/2026, 09:12:01
// Find the Lexicographically Smallest Valid Sequence - 3302
1class Solution {
2public:
3    vector<int> validSequence(string word1, string word2) {
4        int n = word1.length();
5        int m = word2.length();
6
7        vector<int> last(m, -1);
8        int idx = m - 1;
9        for (int i = n - 1; i >= 0 && idx >= 0; i--) {
10            if (word1[i] == word2[idx]) {
11                last[idx] = i;
12                idx--;
13            }
14        }
15
16        vector<int> ans;
17        bool used_mismatch = false;
18        int j = 0;
19
20        for (int i = 0; i < n && j < m; i++) {
21            if (word1[i] == word2[j]) {
22                ans.push_back(i);
23                j++;
24            } else {
25                if (!used_mismatch) {
26                    if (j == m - 1 || last[j + 1] > i) {
27                        used_mismatch = true;
28                        ans.push_back(i);
29                        j++;
30                    }
31                }
32            }
33        }
34
35        if (ans.size() == m) {
36            return ans;
37        }
38        return {};
39    }
40};