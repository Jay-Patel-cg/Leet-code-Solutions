// Last updated: 11/09/2026, 14:27:23
// 1189. Maximum Number of Balloons
1class Solution {
2public:
3    int maxNumberOfBalloons(string text) {
4        unordered_map<char, int> counts;
5        for (char c : text) {
6            counts[c]++;
7        }
8        
9        return min({
10            counts['b'],
11            counts['a'],
12            counts['l'] / 2,
13            counts['o'] / 2,
14            counts['n']
15        });
16    }
17};