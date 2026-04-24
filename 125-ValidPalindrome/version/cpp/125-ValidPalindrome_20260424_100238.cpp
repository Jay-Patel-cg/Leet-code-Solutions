// Last updated: 24/04/2026, 10:02:38
// Valid Palindrome -> Question-125
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string word = "";
5        for(char ch : s){
6            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
7                if((ch >= 'A' && ch <= 'Z')){
8                    ch = ch + 32; // -> This turn Upper case to lower case
9                }
10                word += ch;
11            }
12        }
13         int left = 0; 
14    int right = word.length() - 1;
15
16    while(left < right){
17        if(word[left] != word[right]) return false;
18        ++left;
19        --right;
20    }
21    return true;
22    }
23   
24};