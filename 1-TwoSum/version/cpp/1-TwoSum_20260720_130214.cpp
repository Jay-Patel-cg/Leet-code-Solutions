// Last updated: 20/07/2026, 13:02:14
// 3Sum - 15
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4
5        vector<vector<int>> ans;
6
7        sort(nums.begin(), nums.end());
8
9        int n = nums.size();
10
11        for (int i = 0; i < n; i++) {
12
13            if (i > 0 && nums[i] == nums[i - 1])
14                continue;
15
16            int left = i + 1;
17            int right = n - 1;
18
19            while (left < right) {
20
21                int sum = nums[i] + nums[left] + nums[right];
22
23                if (sum == 0) {
24
25                    ans.push_back({nums[i], nums[left], nums[right]});
26
27                    left++;
28                    right--;
29
30                    while (left < right && nums[left] == nums[left - 1])
31                        left++;
32
33                    while (left < right && nums[right] == nums[right + 1])
34                        right--;
35
36                }
37                else if (sum < 0) {
38                    left++;
39                }
40                else {
41                    right--;
42                }
43            }
44        }
45        return ans;
46    }
47};