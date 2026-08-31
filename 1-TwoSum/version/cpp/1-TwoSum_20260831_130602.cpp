// Last updated: 31/08/2026, 13:06:02
// Two Sum - 1
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        
5        for (int i = 0; i < nums.size(); i++) {
6            
7            for (int j = i + 1; j < nums.size(); j++) {
8                
9                if (nums[i] + nums[j] == target) {
10                    return {i, j};
11                }
12            }
13        }
14        
15        return {};
16    }
17};