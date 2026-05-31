// Last updated: 31/05/2026, 09:33:09
// Monotonic Array - 896
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool increasing = true;
5        bool decreasing = true;
6
7        for (int i = 1; i < nums.size(); i++) {
8            if (nums[i] > nums[i - 1]) {
9                decreasing = false;
10            }
11            if (nums[i] < nums[i - 1]) {
12                increasing = false;
13            }
14        }
15
16        return increasing || decreasing;
17    }
18};