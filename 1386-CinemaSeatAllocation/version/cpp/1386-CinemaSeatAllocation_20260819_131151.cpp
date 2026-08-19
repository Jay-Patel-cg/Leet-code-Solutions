// Last updated: 19/08/2026, 13:11:51
// Cinema Seat Allocation - 1386
1class Solution {
2public:
3    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
4        unordered_map<int, int> reserved;
5        for (const auto& seat : reservedSeats) {
6            int row = seat[0];
7            int col = seat[1];
8            if (col >= 2 && col <= 9) {
9                reserved[row] |= (1 << (col - 2));
10            }
11        }
12
13        int maxGroups = (n - reserved.size()) * 2;
14
15        for (const auto& [row, mask] : reserved) {
16            bool left = (mask & 0b00001111) == 0;
17            bool right = (mask & 0b11110000) == 0;
18            bool middle = (mask & 0b00111100) == 0;
19
20            if (left && right) {
21                maxGroups += 2;
22            } else if (left || right || middle) {
23                maxGroups += 1;
24            }
25        }
26        return maxGroups;
27    }
28};