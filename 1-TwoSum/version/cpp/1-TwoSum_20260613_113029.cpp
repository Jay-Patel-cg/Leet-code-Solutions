// Last updated: 13/06/2026, 11:30:29
// Find Common Characters - 1002
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4
5        vector<string> ans;
6        string res = words[0];
7
8        for(int i = 0; i < res.size(); i++) {
9
10            int count = 0;
11
12            for(int j = 1; j < words.size(); j++) {
13
14                int index = words[j].find(res[i]);
15
16                if(index == -1) {
17                    break;
18                }
19
20                words[j][index] = '#';   
21                count++;
22            }
23
24            if(count == words.size() - 1) {
25                ans.push_back(string(1, res[i]));
26            }
27        }
28
29        return ans;
30    }
31};