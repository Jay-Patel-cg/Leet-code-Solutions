// Last updated: 16/07/2026, 19:18:21
// Add Binary - 67
1class Solution {
2public:
3    string addBinary(string a, string b) {
4        int i = a.length() - 1;
5        int j = b.length() - 1;
6
7        int carry = 0;
8        string ans = "";
9
10        while (i >= 0 || j >= 0 || carry) {
11            int sum = carry;
12
13            if (i >= 0) {
14                sum += a[i] - '0';
15                i--;
16            }
17
18            if (j >= 0) {
19                sum += b[j] - '0';
20                j--;
21            }
22
23            ans += (sum % 2) + '0';
24            carry = sum / 2;
25        }
26
27        reverse(ans.begin(), ans.end());
28
29        return ans;
30    }
31};