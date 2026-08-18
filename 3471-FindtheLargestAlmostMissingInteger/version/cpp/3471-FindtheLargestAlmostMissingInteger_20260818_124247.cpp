// Last updated: 18/08/2026, 12:42:47
// Find the Largest Almost Missing Integer - 3471
1class Solution {
2public:
3    int largestInteger(vector<int>& nums, int k) {
4        int n = nums.size();
5        unordered_map<int, int> subarray_count;
6
7        for (int i = 0; i <= n - k; ++i) {
8            unordered_set<int> unique_elements;
9            for (int j = i; j < i + k; ++j) {
10                unique_elements.insert(nums[j]);
11            }
12            for (int val : unique_elements) {
13                subarray_count[val]++;
14            }
15        }
16
17        int ans = -1;
18        for (auto& [val, count] : subarray_count) {
19            if (count == 1) {
20                ans = max(ans, val);
21            }
22        }
23
24        return ans;
25    }
26};