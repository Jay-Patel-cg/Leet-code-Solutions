// Last updated: 17/07/2026, 13:55:39
// Longest Harmonious Subsequence - 594
1class Solution {
2public:
3    int findLHS(vector<int>& nums) {
4
5        unordered_map<int, int> freq;
6
7        for (int num : nums) {
8            freq[num]++;
9        }
10
11        int ans = 0;
12
13        for (auto it : freq) {
14
15            int num = it.first;
16
17            if (freq.find(num + 1) != freq.end()) {
18                ans = max(ans, freq[num] + freq[num + 1]);
19            }
20        }
21
22        return ans;
23    }
24};