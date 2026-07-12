// Last updated: 12/07/2026, 14:32:55
// Maximum 69 Number - 1323
1class Solution {
2public:
3    int maximum69Number (int num) {
4        string s = to_string(num);
5
6        for (int i = 0; i < s.size(); i++) {
7            if (s[i] == '6') {
8                s[i] = '9';
9                break;
10            }
11        }
12
13        return stoi(s);
14    }
15};