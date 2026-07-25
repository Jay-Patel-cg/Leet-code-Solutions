// Last updated: 25/07/2026, 12:23:05
// Valid Anagram - 242
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.size() != t.size()){
5            return false;
6        }
7
8        vector<int> freq(26,0);
9
10        for(int i=0; i < s.size(); i++){
11            freq[s[i] - 'a']++;
12            freq[t[i] - 'a']--;
13        }
14
15        for(int count : freq){
16            if(count != 0){
17                return false;
18            }
19        }
20        return true;
21    }
22};