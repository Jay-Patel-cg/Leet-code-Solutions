// Last updated: 11/09/2026, 14:26:00
// 3483. Unique 3-Digit Even Numbers
1class Solution {
2public:
3    int totalNumbers(vector<int>& digits) {
4        vector<int> count(10, 0);
5        for (int d : digits) {
6            count[d]++;
7        }
8        
9        int ans = 0;
10        for (int num = 100; num <= 998; num += 2) {
11            int d1 = num / 100;
12            int d2 = (num / 10) % 10;
13            int d3 = num % 10;
14            
15            count[d1]--;
16            count[d2]--;
17            count[d3]--;
18            
19            if (count[d1] >= 0 && count[d2] >= 0 && count[d3] >= 0) {
20                ans++;
21            }
22            
23            count[d1]++;
24            count[d2]++;
25            count[d3]++;
26        }
27        
28        return ans;
29    }
30};