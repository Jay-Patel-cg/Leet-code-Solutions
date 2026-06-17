// Last updated: 17/06/2026, 12:03:15
// Simplify Path - 71
1class Solution {
2public:
3    string simplifyPath(string path) {
4        vector<string> st;
5        string curr;
6
7        stringstream ss(path);
8
9        while (getline(ss, curr, '/')) {
10            if (curr == "" || curr == ".") {
11                continue;
12            }
13            else if (curr == "..") {
14                if (!st.empty())
15                    st.pop_back();
16            }
17            else {
18                st.push_back(curr);
19            }
20        }
21
22        string ans = "";
23
24        for (string dir : st) {
25            ans += "/" + dir;
26        }
27
28        return ans.empty() ? "/" : ans;
29    }
30};