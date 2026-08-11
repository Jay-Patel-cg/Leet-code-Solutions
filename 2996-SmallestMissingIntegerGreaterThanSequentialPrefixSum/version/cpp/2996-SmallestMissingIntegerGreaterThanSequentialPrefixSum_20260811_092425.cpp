// Last updated: 11/08/2026, 09:24:25
// Smallest Missing Integer Greater Than Sequential Prefix Sum - 2996
1#include <vector>
2#include <unordered_set>
3
4class Solution {
5public:
6    int missingInteger(std::vector<int>& nums) {
7        int sum = nums[0];
8        for (size_t i = 1; i < nums.size(); ++i) {
9            if (nums[i] == nums[i - 1] + 1) {
10                sum += nums[i];
11            } else {
12                break;
13            }
14        }
15
16        std::unordered_set<int> numSet(nums.begin(), nums.end());
17
18        while (numSet.count(sum)) {
19            sum++;
20        }
21
22        return sum;
23    }
24};