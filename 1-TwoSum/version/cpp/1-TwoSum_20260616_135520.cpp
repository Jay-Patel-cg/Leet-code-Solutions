// Last updated: 16/06/2026, 13:55:20
// Compare Version Numbers - 165
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4        vector<string> v1, v2;
5        string temp;
6
7        stringstream ss1(version1);
8        while (getline(ss1, temp, '.')) {
9            v1.push_back(temp);
10        }
11
12        stringstream ss2(version2);
13        while (getline(ss2, temp, '.')) {
14            v2.push_back(temp);
15        }
16
17        int n = max(v1.size(), v2.size());
18
19        for (int i = 0; i < n; i++) {
20            long long num1 = (i < v1.size()) ? stoll(v1[i]) : 0;
21            long long num2 = (i < v2.size()) ? stoll(v2[i]) : 0;
22
23            if (num1 > num2) return 1;
24            if (num1 < num2) return -1;
25        }
26
27        return 0;
28    }
29};