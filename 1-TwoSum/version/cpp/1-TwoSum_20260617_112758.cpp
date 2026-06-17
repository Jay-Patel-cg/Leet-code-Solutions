// Last updated: 17/06/2026, 11:27:58
// Split a String in Balanced Strings - 1221
1class Solution {
2public:
3    int balancedStringSplit(string s) {
4        int balance = 0 , countPair = 0;
5        for(char ch : s){
6            if(ch == 'R') ++balance;
7            else{
8                --balance;
9            }
10            if(balance == 0) ++countPair;
11        }
12        return countPair;
13    }
14};