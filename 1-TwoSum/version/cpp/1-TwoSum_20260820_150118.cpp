// Last updated: 20/08/2026, 15:01:18
// Multiply Strings - 43
1class Solution {
2public:
3    string multiply(string num1, string num2) {
4        if (num1 == "0" || num2 == "0") return "0";
5
6        int n = num1.size();
7        int m = num2.size();
8        vector<int> result(n + m, 0);
9
10        for (int i = n - 1; i >= 0; --i) {
11            for (int j = m - 1; j >= 0; --j) {
12                int mul = (num1[i] - '0') * (num2[j] - '0');
13                int sum = mul + result[i + j + 1];
14
15                result[i + j + 1] = sum % 10;
16                result[i + j] += sum / 10;
17            }
18        }
19
20        string ans = "";
21        int i = 0;
22        while (i < result.size() && result[i] == 0) {
23            i++;
24        }
25
26        while (i < result.size()) {
27            ans.push_back(result[i] + '0');
28            i++;
29        }
30
31        return ans;
32    }
33};