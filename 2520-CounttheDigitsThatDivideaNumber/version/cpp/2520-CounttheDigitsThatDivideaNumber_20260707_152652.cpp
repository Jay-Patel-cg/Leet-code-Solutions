// Last updated: 07/07/2026, 15:26:52
// Find All Duplicates in an Array - 442
1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        vector<int> ans;
5
6        for (int i = 0; i < nums.size(); i++) {
7            int index = abs(nums[i]) - 1;
8
9            if (nums[index] < 0) {
10                ans.push_back(index + 1);
11            } else {
12                nums[index] = -nums[index];
13            }
14        }
15
16        return ans;
17    }
18};