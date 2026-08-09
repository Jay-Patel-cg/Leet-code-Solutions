// Last updated: 09/08/2026, 21:24:07
// Stone Game II - 1140
1class Solution {
2public:
3    int stoneGameII(vector<int>& piles) {
4        int n = piles.size();
5        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
6        vector<int> suffixSum(n + 1, 0);
7
8        for (int i = n - 1; i >= 0; --i) {
9            suffixSum[i] = suffixSum[i + 1] + piles[i];
10        }
11
12        for (int i = n - 1; i >= 0; --i) {
13            for (int m = 1; m <= n; ++m) {
14                if (i + 2 * m >= n) {
15                    dp[i][m] = suffixSum[i];
16                } else {
17                    for (int x = 1; x <= 2 * m; ++x) {
18                        dp[i][m] = max(dp[i][m], suffixSum[i] - dp[i + x][max(m, x)]);
19                    }
20                }
21            }
22        }
23
24        return dp[0][1];
25    }
26};