// Last updated: 11/07/2026, 22:20:11
// Jewels and Stones - 771
1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        unordered_set<char> jewelSet;
5
6        // Store all jewels
7        for (char ch : jewels) {
8            jewelSet.insert(ch);
9        }
10
11        int count = 0;
12
13        // Count matching stones
14        for (char ch : stones) {
15            if (jewelSet.count(ch)) {
16                count++;
17            }
18        }
19
20        return count;
21    }
22};