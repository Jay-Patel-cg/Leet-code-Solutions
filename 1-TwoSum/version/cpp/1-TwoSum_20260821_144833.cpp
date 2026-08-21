// Last updated: 21/08/2026, 14:48:33
// Merge Intervals - 56
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        vector<vector<int>> ans;
5
6        sort(intervals.begin(), intervals.end());
7
8        for (int i = 0; i < intervals.size(); i++) {
9            if (ans.empty() || ans.back()[1] < intervals[i][0]) {
10                ans.push_back(intervals[i]);
11            } else {
12                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
13            }
14        }
15
16        return ans;
17    }
18};