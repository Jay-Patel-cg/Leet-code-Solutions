// Last updated: 01/09/2026, 15:19:16
// Find First and Last Position of Element in Sorted Array - 34
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        return {findBound(nums, target, true), findBound(nums, target, false)};
5    }
6
7private:
8    int findBound(const vector<int>& nums, int target, bool isFirst) {
9        int left = 0, right = nums.size() - 1;
10        int bound = -1;
11
12        while (left <= right) {
13            int mid = left + (right - left) / 2;
14
15            if (nums[mid] == target) {
16                bound = mid;
17                if (isFirst) {
18                    right = mid - 1;
19                } else {
20                    left = mid + 1;
21                }
22            } else if (nums[mid] < target) {
23                left = mid + 1;
24            } else {
25                right = mid - 1;
26            }
27        }
28
29        return bound;
30    }
31};