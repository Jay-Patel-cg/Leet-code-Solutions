// Last updated: 07/07/2026, 15:30:11
// Goal Parser Interpretation - 1678
1class Solution {
2public:
3    string interpret(string command) {
4        string ans = "";
5
6        for (int i = 0; i < command.size(); i++) {
7
8            if (command[i] == 'G') {
9                ans += 'G';
10            }
11            else if (command[i] == '(' && command[i + 1] == ')') {
12                ans += 'o';
13                i++;
14            }
15            else {
16                ans += "al";
17                i += 3;
18            }
19        }
20
21        return ans;
22    }
23};