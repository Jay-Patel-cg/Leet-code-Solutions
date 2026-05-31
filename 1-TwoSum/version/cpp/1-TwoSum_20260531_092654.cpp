// Last updated: 31/05/2026, 09:26:54
// Number of Unequal Triplets in Array - 2475
1class Solution {
2public:
3    int unequalTriplets(vector<int>& nums) {
4        int n = nums.size();
5        int count = 0;
6
7        for (int i = 0; i < n; i++) {
8            for (int j = i + 1; j < n; j++) {
9                for (int k = j + 1; k < n; k++) {
10                    if (nums[i] != nums[j] &&
11                        nums[i] != nums[k] &&
12                        nums[j] != nums[k]) {
13                        count++;
14                    }
15                }
16            }
17        }
18
19        return count;
20    }
21};