// Last updated: 06/04/2026, 12:14:46
// Group anagrams Problem num-49 solved
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string , vector<string>> mp;
5
6        for(string s : strs){
7            string temp = s;
8            sort(temp.begin() , temp.end());
9            mp[temp].push_back(s);
10        }
11        vector<vector<string>> result;
12        for(auto & it : mp){
13            result.push_back(it.second);
14        }
15        return result;
16    }
17};