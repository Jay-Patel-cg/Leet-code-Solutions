// Last updated: 31/05/2026, 09:25:50
// N-Repeated Element in Size 2N Array - 961
1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        unordered_set<int> seen;
5
6        for (int num : nums) {
7            if (seen.count(num)) {
8                return num;
9            }
10            seen.insert(num);
11        }
12
13        return -1;
14    }
15};