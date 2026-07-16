// Last updated: 16/07/2026, 19:20:55
// Sqrt(x) - 69
1class Solution {
2public:
3    int mySqrt(int x) {
4        if (x == 0 || x == 1)
5            return x;
6
7        int low = 1, high = x;
8        int ans = 0;
9
10        while (low <= high) {
11            long long mid = low + (high - low) / 2;
12
13            if (mid * mid == x)
14                return mid;
15            else if (mid * mid < x) {
16                ans = mid;
17                low = mid + 1;
18            } else {
19                high = mid - 1;
20            }
21        }
22
23        return ans;
24    }
25};