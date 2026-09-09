// Last updated: 09/09/2026, 09:27:21
// 3871. Count Commas in Range II
1class Solution {
2public:
3    long long countCommas(long long n) {
4        long long count = 0;
5
6        if (n >= 1000)
7            count += n - 999;
8
9        if (n >= 1000000)
10            count += n - 999999;
11
12        if (n >= 1000000000)
13            count += n - 999999999;
14
15        if (n >= 1000000000000LL)
16            count += n - 999999999999LL;
17
18        if (n >= 1000000000000000LL)
19            count += n - 999999999999999LL;
20
21        return count;
22    }
23};