// Last updated: 25/07/2026, 12:12:49
// Excel Sheet Column Title - 168
1class Solution {
2public:
3    string convertToTitle(int columnNumber) {
4        string ans = "";
5        while(columnNumber > 0){
6            columnNumber--;
7            ans += (char)('A' + (columnNumber%26));
8            columnNumber /= 26;
9        }
10        reverse(ans.begin(), ans.end());
11        return ans;
12    }
13};