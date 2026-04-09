// Last updated: 09/04/2026, 10:15:41
// Reverse Vowels of a String Problem Number -> 345
1class Solution {
2public:
3    string reverseVowels(string s) {
4        int i = 0, j = s.size() - 1;
5
6        while (i < j) {
7            while (i < j && !isVowel(s[i])) i++;
8            while (i < j && !isVowel(s[j])) j--;
9
10            swap(s[i], s[j]);
11            i++;
12            j--;
13        }
14        return s;
15    }
16
17    bool isVowel(char c) {
18        c = tolower(c);
19        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
20    }
21};