// Last updated: 30/04/2026, 13:47:45
// Check if the Sentence Is Pangram -> Porblem Num -> 1832
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        return unordered_set<char>(sentence.begin() , sentence.end()).size() == 26;
5    }
6};