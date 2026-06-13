// Last updated: 13/06/2026, 11:50:11
// Digit Frequency Score - 3945
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4
5        string str = to_string(n);
6        int sum = 0;
7
8        for(int i = 0; i < str.size(); i++){
9            sum += str[i] - '0';
10        }
11
12        return sum;
13    }
14};