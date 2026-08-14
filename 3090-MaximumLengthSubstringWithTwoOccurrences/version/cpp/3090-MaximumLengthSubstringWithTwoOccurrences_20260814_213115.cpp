// Last updated: 14/08/2026, 21:31:15
// Maximum Length Substring With Two Occurrences - 3090
1class Solution {
2public:
3    int maximumLengthSubstring(string s) {
4        vector<int> count(26, 0);
5        int max_len = 0;
6        int left = 0;
7        
8        for (int right = 0; right < s.length(); ++right) {
9            count[s[right] - 'a']++;
10            while (count[s[right] - 'a'] > 2) {
11                count[s[left] - 'a']--;
12                left++;
13            }
14            max_len = max(max_len, right - left + 1);
15        }
16        
17        return max_len;
18    }
19};