// Last updated: 15/06/2026, 11:27:37
// Find All Anagrams in a String - 438
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4
5        vector<int> ans;
6
7        unordered_map<char,int> pMap;
8
9        if(p.size() > s.size()) return {};
10
11        for(char c: p){
12            pMap[c]++;
13        }
14
15        int k = p.size();
16
17        for(int i=0 ; i<=s.size()-k ; i++){
18            unordered_map<char,int> m;
19            for(int j=i ; j < i + k ; j++){
20                m[s[j]]++;
21            }
22            if(m == pMap){
23                ans.push_back(i);
24            }
25        }
26        return ans;
27    }
28};