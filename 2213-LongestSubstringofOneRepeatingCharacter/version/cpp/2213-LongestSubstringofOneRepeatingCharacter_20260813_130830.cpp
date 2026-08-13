// Last updated: 13/08/2026, 13:08:30
// Longest Substring of One Repeating Character - 2213
1#include <vector>
2#include <string>
3#include <algorithm>
4
5using namespace std;
6
7struct Node {
8    int max_len;
9    int prefix_len;
10    int suffix_len;
11    char first_char;
12    char last_char;
13
14    Node() : max_len(0), prefix_len(0), suffix_len(0), first_char(0), last_char(0) {}
15};
16
17class SegmentTree {
18private:
19    int n;
20    vector<Node> tree;
21
22    Node merge(const Node& left, const Node& right, int left_len, int right_len) {
23        Node res;
24        res.first_char = left.first_char;
25        res.last_char = right.last_char;
26
27        if (left.prefix_len == left_len && left.first_char == right.first_char) {
28            res.prefix_len = left_len + right.prefix_len;
29        } else {
30            res.prefix_len = left.prefix_len;
31        }
32
33        if (right.suffix_len == right_len && right.last_char == left.last_char) {
34            res.suffix_len = right_len + left.suffix_len;
35        } else {
36            res.suffix_len = right.suffix_len;
37        }
38
39        res.max_len = max(left.max_len, right.max_len);
40        if (left.last_char == right.first_char) {
41            res.max_len = max(res.max_len, left.suffix_len + right.prefix_len);
42        }
43
44        return res;
45    }
46
47    void build(const string& s, int node, int start, int end) {
48        if (start == end) {
49            tree[node].max_len = 1;
50            tree[node].prefix_len = 1;
51            tree[node].suffix_len = 1;
52            tree[node].first_char = s[start];
53            tree[node].last_char = s[start];
54            return;
55        }
56        int mid = start + (end - start) / 2;
57        build(s, 2 * node, start, mid);
58        build(s, 2 * node + 1, mid + 1, end);
59        tree[node] = merge(tree[2 * node], tree[2 * node + 1], mid - start + 1, end - mid);
60    }
61
62    void update(int node, int start, int end, int idx, char val) {
63        if (start == end) {
64            tree[node].first_char = val;
65            tree[node].last_char = val;
66            return;
67        }
68        int mid = start + (end - start) / 2;
69        if (idx <= mid) {
70            update(2 * node, start, mid, idx, val);
71        } else {
72            update(2 * node + 1, mid + 1, end, idx, val);
73        }
74        tree[node] = merge(tree[2 * node], tree[2 * node + 1], mid - start + 1, end - mid);
75    }
76
77public:
78    SegmentTree(const string& s) {
79        n = s.length();
80        tree.resize(4 * n);
81        build(s, 1, 0, n - 1);
82    }
83
84    void update(int idx, char val) {
85        update(1, 0, n - 1, idx, val);
86    }
87
88    int getMax() {
89        return tree[1].max_len;
90    }
91};
92
93class Solution {
94public:
95    vector<int> longestRepeating(string s, string queryCharacters, vector<int>& queryIndices) {
96        SegmentTree st(s);
97        int k = queryIndices.size();
98        vector<int> result(k);
99
100        for (int i = 0; i < k; ++i) {
101            st.update(queryIndices[i], queryCharacters[i]);
102            result[i] = st.getMax();
103        }
104
105        return result;
106    }
107};