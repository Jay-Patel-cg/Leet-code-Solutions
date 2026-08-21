// Last updated: 21/08/2026, 13:03:42
// Kth Smallest Amount With Single Denomination Combination - 3116
1class Solution {
2public:
3    long long findKthSmallest(vector<int>& coins, int k) {
4        int n = coins.size();
5        long long low = 1, high = (long long)*min_element(coins.begin(), coins.end()) * k;
6        long long ans = high;
7
8        auto count = [&](long long target) {
9            long long cnt = 0;
10            for (int mask = 1; mask < (1 << n); ++mask) {
11                long long lcm_val = 1;
12                int bits = 0;
13                bool overflow = false;
14
15                for (int i = 0; i < n; ++i) {
16                    if ((mask >> i) & 1) {
17                        bits++;
18                        long long g = std::gcd(lcm_val, (long long)coins[i]);
19                        if (target / (coins[i] / g) < lcm_val) {
20                            overflow = true;
21                            break;
22                        }
23                        lcm_val = (lcm_val / g) * coins[i];
24                    }
25                }
26
27                if (overflow) continue;
28
29                if (bits % 2 == 1) {
30                    cnt += target / lcm_val;
31                } else {
32                    cnt -= target / lcm_val;
33                }
34            }
35            return cnt;
36        };
37
38        while (low <= high) {
39            long long mid = low + (high - low) / 2;
40            if (count(mid) >= k) {
41                ans = mid;
42                high = mid - 1;
43            } else {
44                low = mid + 1;
45            }
46        }
47
48        return ans;
49    }
50};