// Last updated: 01/08/2026, 21:34:23
// Climbing Stairs - 70
1class Solution {
2public:
3    int climbStairs(int n) {
4
5        if (n <= 2)
6            return n;
7
8        vector<int> dp(n + 1);
9
10        dp[1] = 1;
11        dp[2] = 2;
12
13        for (int i = 3; i <= n; i++) {
14            dp[i] = dp[i - 1] + dp[i - 2];
15        }
16
17        return dp[n];
18    }
19};