// Last updated: 20/07/2026, 13:12:05
// Rotate Array - 189
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4
5        int n = nums.size();
6        k = k % n;
7
8        reverse(nums.begin(), nums.end());
9        reverse(nums.begin(), nums.begin() + k);
10        reverse(nums.begin() + k, nums.end());
11    }
12};