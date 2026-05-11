// Last updated: 12/05/2026, 01:45:32
// Concatenation of Array - 1929
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector<int> ans;
5
6        for(int i = 0; i < nums.size(); i++) {
7            ans.push_back(nums[i]);
8        }
9
10        for(int i = 0; i < nums.size(); i++) {
11            ans.push_back(nums[i]);
12        }
13
14        return ans;
15    }
16};