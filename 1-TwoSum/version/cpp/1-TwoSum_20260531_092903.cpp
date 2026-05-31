// Last updated: 31/05/2026, 09:29:03
// Most Frequent Even Element - 2404
1class Solution {
2public:
3    int mostFrequentEven(vector<int>& nums) {
4        unordered_map<int, int> freq;
5
6        for (int num : nums) {
7            if (num % 2 == 0) {
8                freq[num]++;
9            }
10        }
11
12        int ans = -1;
13        int maxFreq = 0;
14
15        for (auto &p : freq) {
16            int num = p.first;
17            int count = p.second;
18
19            if (count > maxFreq || (count == maxFreq && num < ans)) {
20                maxFreq = count;
21                ans = num;
22            }
23        }
24
25        return ans;
26    }
27};