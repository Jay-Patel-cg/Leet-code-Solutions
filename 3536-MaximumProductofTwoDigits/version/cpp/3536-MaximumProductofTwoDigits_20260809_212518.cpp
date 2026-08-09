// Last updated: 09/08/2026, 21:25:18
// Maximum Product of Two Digits -3536
1class Solution {
2public:
3    int maxProduct(int n) {
4        vector<int> digits;
5        while (n > 0) {
6            digits.push_back(n % 10);
7            n /= 10;
8        }
9
10        int maxProd = 0;
11        int m = digits.size();
12
13        for (int i = 0; i < m; ++i) {
14            for (int j = i + 1; j < m; ++j) {
15                maxProd = max(maxProd, digits[i] * digits[j]);
16            }
17        }
18
19        return maxProd;
20    }
21};