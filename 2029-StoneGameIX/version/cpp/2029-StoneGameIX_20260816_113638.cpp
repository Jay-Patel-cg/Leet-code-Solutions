// Last updated: 16/08/2026, 11:36:38
// Stone Game IX - 2029
1class Solution {
2public:
3    bool stoneGameIX(vector<int>& stones) {
4        vector<int> cnt(3, 0);
5        for (int stone : stones) {
6            cnt[stone % 3]++;
7        }
8
9        if (cnt[0] % 2 == 0) {
10            return cnt[1] >= 1 && cnt[2] >= 1;
11        } else {
12            return abs(cnt[1] - cnt[2]) > 2;
13        }
14    }
15};