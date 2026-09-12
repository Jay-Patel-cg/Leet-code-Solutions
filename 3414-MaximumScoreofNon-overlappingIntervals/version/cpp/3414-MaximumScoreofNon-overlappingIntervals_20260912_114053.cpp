// Last updated: 12/09/2026, 11:40:53
// 3414. Maximum Score of Non-overlapping Intervals
1class Solution {
2public:
3    vector<int> maximumWeight(vector<vector<int>>& intervals) {
4        int n = intervals.size();
5        vector<vector<int>> sorted_intervals;
6        sorted_intervals.reserve(n);
7        for (int i = 0; i < n; ++i) {
8            sorted_intervals.push_back({intervals[i][0], intervals[i][1], intervals[i][2], i});
9        }
10        sort(sorted_intervals.begin(), sorted_intervals.end(), [](const vector<int>& a, const vector<int>& b) {
11            return a[0] < b[0];
12        });
13
14        vector<int> start_times(n);
15        for (int i = 0; i < n; ++i) {
16            start_times[i] = sorted_intervals[i][0];
17        }
18
19        vector<vector<pair<long long, vector<int>>>> dp(n + 1, vector<pair<long long, vector<int>>>(5, {0, {}}));
20
21        for (int i = n - 1; i >= 0; --i) {
22            int r = sorted_intervals[i][1];
23            int weight = sorted_intervals[i][2];
24            int original_idx = sorted_intervals[i][3];
25
26            int next_idx = upper_bound(start_times.begin(), start_times.end(), r) - start_times.begin();
27
28            for (int k = 1; k <= 4; ++k) {
29                dp[i][k] = dp[i + 1][k];
30
31                long long take_weight = weight + dp[next_idx][k - 1].first;
32                vector<int> take_indices = dp[next_idx][k - 1].second;
33                take_indices.push_back(original_idx);
34                sort(take_indices.begin(), take_indices.end());
35
36                if (take_weight > dp[i][k].first) {
37                    dp[i][k] = {take_weight, take_indices};
38                } else if (take_weight == dp[i][k].first && !take_indices.empty()) {
39                    if (dp[i][k].second.empty() || take_indices < dp[i][k].second) {
40                        dp[i][k] = {take_weight, take_indices};
41                    }
42                }
43            }
44        }
45
46        return dp[0][4].second;
47    }
48};