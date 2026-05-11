// Last updated: 12/05/2026, 01:48:03
// Left and Right Sum Differences -2574
1class Solution {
2public:
3    vector<int> leftRightDifference(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> ans(n);
6
7        int leftSum = 0;
8        int rightSum = 0;
9
10        for(int num : nums) {
11            rightSum += num;
12        }
13
14        for(int i = 0; i < n; i++) {
15            rightSum -= nums[i];
16
17            ans[i] = abs(leftSum - rightSum);
18
19            leftSum += nums[i];
20        }
21
22        return ans;
23    }
24};