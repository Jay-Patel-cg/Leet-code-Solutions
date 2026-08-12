// Last updated: 12/08/2026, 13:07:55
// Count and Say - 38
1class Solution {
2public:
3    string countAndSay(int n) {
4        if (n == 1) return "1";
5        
6        string s = "1";
7        for (int i = 2; i <= n; ++i) {
8            string next_s = "";
9            int len = s.length();
10            
11            for (int j = 0; j < len; ++j) {
12                int count = 1;
13                while (j + 1 < len && s[j] == s[j + 1]) {
14                    count++;
15                    j++;
16                }
17                next_s += to_string(count) + s[j];
18            }
19            
20            s = next_s;
21        }
22        
23        return s;
24    }
25};