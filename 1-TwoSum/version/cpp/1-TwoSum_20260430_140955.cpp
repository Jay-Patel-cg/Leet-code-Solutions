// Last updated: 30/04/2026, 14:09:55
// Maximum Number of Words Found in Sentences -> problem num -> 2114
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxWords = 0;
5        for(string st : sentences){
6            int wordCount = 1;
7            for(char ch : st){
8                if(ch == ' '){
9                    ++wordCount;
10                }
11            }
12            maxWords = max(wordCount , maxWords);
13        }
14        return maxWords;
15    }
16};