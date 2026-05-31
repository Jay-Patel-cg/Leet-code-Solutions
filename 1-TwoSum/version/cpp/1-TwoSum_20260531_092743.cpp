// Last updated: 31/05/2026, 09:27:43
// Maximum Ascending Subarray Sum - 1800
1class Solution {
2public:
3    int maxAscendingSum(vector<int>& nums) {
4        int currSum = nums[0];
5        int maxSum = nums[0];
6
7        for (int i = 1; i < nums.size(); i++) {
8            if (nums[i] > nums[i - 1]) {
9                currSum += nums[i];
10            } else {
11                currSum = nums[i];
12            }
13
14            maxSum = max(maxSum, currSum);
15        }
16
17        return maxSum;
18    }
19};