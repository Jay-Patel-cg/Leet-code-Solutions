// Last updated: 13/06/2026, 11:40:25
// Find Words Containing Character - 2942
1class Solution {
2public:
3    vector<int> findWordsContaining(vector<string>& words, char x) {
4        vector<int> ans;
5
6        for(int i=0; i<words.size(); i++){
7            if(words[i].find(x) != -1){
8                ans.push_back(i);
9            }
10        }
11        return ans;
12    }
13};