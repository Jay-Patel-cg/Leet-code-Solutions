// Last updated: 17/08/2026, 09:14:49
// Stone Game V - 1563
1class Solution {
2public:
3    int stoneGameV(vector<int>& stoneValue) {
4        int n = stoneValue.size();
5        vector<int> pref(n + 1, 0);
6        for (int i = 0; i < n; ++i) {
7            pref[i + 1] = pref[i] + stoneValue[i];
8        }
9
10        auto getSum = [&](int l, int r) {
11            return pref[r + 1] - pref[l];
12        };
13
14        vector<vector<int>> dp(n, vector<int>(n, 0));
15
16        for (int len = 2; len <= n; ++len) {
17            for (int i = 0; i <= n - len; ++i) {
18                int j = i + len - 1;
19                int maxScore = 0;
20
21                for (int k = i; k < j; ++k) {
22                    int leftSum = getSum(i, k);
23                    int rightSum = getSum(k + 1, j);
24
25                    if (leftSum < rightSum) {
26                        maxScore = max(maxScore, leftSum + dp[i][k]);
27                    } else if (rightSum < leftSum) {
28                        maxScore = max(maxScore, rightSum + dp[k + 1][j]);
29                    } else {
30                        maxScore = max(maxScore, leftSum + max(dp[i][k], dp[k + 1][j]));
31                    }
32                }
33                dp[i][j] = maxScore;
34            }
35        }
36
37        return dp[0][n - 1];
38    }
39};