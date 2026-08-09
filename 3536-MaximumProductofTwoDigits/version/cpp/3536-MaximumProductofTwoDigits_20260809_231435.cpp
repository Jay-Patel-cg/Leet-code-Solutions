// Last updated: 09/08/2026, 23:14:35
// Maximum Product of Three Numbers - 628
1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        int min1 = INT_MAX, min2 = INT_MAX;
5        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
6
7        for (int n : nums) {
8            if (n <= min1) {
9                min2 = min1;
10                min1 = n;
11            } else if (n < min2) {
12                min2 = n;
13            }
14
15            if (n >= max1) {
16                max3 = max2;
17                max2 = max1;
18                max1 = n;
19            } else if (n >= max2) {
20                max3 = max2;
21                max2 = n;
22            } else if (n > max3) {
23                max3 = n;
24            }
25        }
26
27        return max(max1 * max2 * max3, min1 * min2 * max1);
28    }
29};