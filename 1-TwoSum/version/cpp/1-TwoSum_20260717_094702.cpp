// Last updated: 17/07/2026, 09:47:02
// Find All Numbers Disappeared in an Array - 448
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        vector<int> result;
5        
6        for (int i = 0; i < nums.size(); i++) {
7            int index = abs(nums[i]) - 1;
8            if (nums[index] > 0) {
9                nums[index] = -nums[index];
10            }
11        }
12        
13        for (int i = 0; i < nums.size(); i++) {
14            if (nums[i] > 0) {
15                result.push_back(i + 1);
16            }
17        }
18        
19        return result;
20    }
21};