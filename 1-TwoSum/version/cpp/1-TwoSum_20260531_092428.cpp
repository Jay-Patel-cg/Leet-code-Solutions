// Last updated: 31/05/2026, 09:24:28
// Destination City - 1436
1class Solution {
2public:
3    string destCity(vector<vector<string>>& paths) {
4        unordered_set<string> source;
5
6        for (auto &path : paths) {
7            source.insert(path[0]);
8        }
9
10        for (auto &path : paths) {
11            if (source.find(path[1]) == source.end()) {
12                return path[1];
13            }
14        }
15
16        return "";
17    }
18};