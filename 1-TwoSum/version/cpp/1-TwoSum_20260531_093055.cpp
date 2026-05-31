// Last updated: 31/05/2026, 09:30:55
// Count Special Quadruplets - 1995
1class Solution {
2public:
3    int countQuadruplets(vector<int>& nums) {
4        int n = nums.size();
5        int count = 0;
6
7        for (int a = 0; a < n; a++) {
8            for (int b = a + 1; b < n; b++) {
9                for (int c = b + 1; c < n; c++) {
10                    for (int d = c + 1; d < n; d++) {
11                        if (nums[a] + nums[b] + nums[c] == nums[d]) {
12                            count++;
13                        }
14                    }
15                }
16            }
17        }
18
19        return count;
20    }
21};