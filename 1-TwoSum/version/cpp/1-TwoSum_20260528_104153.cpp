// Last updated: 28/05/2026, 10:41:53
// Happy Number - 202
1class Solution {
2public:
3    int getSum(int n) {
4        int sum = 0;
5
6        while(n > 0) {
7            int digit = n % 10;
8            sum += digit * digit;
9            n /= 10;
10        }
11
12        return sum;
13    }
14
15    bool isHappy(int n) {
16        unordered_set<int> st;
17
18        while(n != 1 && st.find(n) == st.end()) {
19            st.insert(n);
20            n = getSum(n);
21        }
22
23        return n == 1;
24    }
25};