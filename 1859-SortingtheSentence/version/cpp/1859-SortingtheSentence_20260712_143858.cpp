// Last updated: 12/07/2026, 14:38:58
// Determine if String Halves Are Alike - 1704
1class Solution {
2public:
3    bool isVowel(char c) {
4        c = tolower(c);
5        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
6    }
7
8    bool halvesAreAlike(string s) {
9        int count1 = 0, count2 = 0;
10        int n = s.size();
11
12        for (int i = 0; i < n / 2; i++) {
13            if (isVowel(s[i]))
14                count1++;
15        }
16
17        for (int i = n / 2; i < n; i++) {
18            if (isVowel(s[i]))
19                count2++;
20        }
21
22        return count1 == count2;
23    }
24};