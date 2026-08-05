// Last updated: 05/08/2026, 10:25:52
// Remove Methods From Project -3310
1class Solution {
2public:
3    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
4        vector<vector<int>> adj(n);
5        for (const auto& inv : invocations) {
6            adj[inv[0]].push_back(inv[1]);
7        }
8
9        vector<bool> suspicious(n, false);
10        vector<int> q;
11        q.push_back(k);
12        suspicious[k] = true;
13
14        int head = 0;
15        while (head < (int)q.size()) {
16            int u = q[head++];
17            for (int v : adj[u]) {
18                if (!suspicious[v]) {
19                    suspicious[v] = true;
20                    q.push_back(v);
21                }
22            }
23        }
24
25        bool can_remove = true;
26        for (const auto& inv : invocations) {
27            int u = inv[0];
28            int v = inv[1];
29            if (!suspicious[u] && suspicious[v]) {
30                can_remove = false;
31                break;
32            }
33        }
34
35        vector<int> result;
36        if (!can_remove) {
37            for (int i = 0; i < n; ++i) {
38                result.push_back(i);
39            }
40        } else {
41            for (int i = 0; i < n; ++i) {
42                if (!suspicious[i]) {
43                    result.push_back(i);
44                }
45            }
46        }
47
48        return result;
49    }
50};