// Last updated: 30/04/2026, 09:58:59
// Valid Parentheses - problem Number 20 in C++
1class Solution {
2public:
3    bool isValid(string s) {
4        vector<char>arr;
5        for(char ch:s){
6            if(ch == '(' || ch == '{' || ch == '['){ // Opening
7                arr.push_back(ch);
8            }
9            else{                                 // closing
10                    if(arr.empty()) return false;
11                    char temp = arr.back();
12                    arr.pop_back();
13                    if((ch ==')' && temp != '(' ) || 
14                    (ch =='}' && temp != '{' ) ||
15                    (ch ==']' && temp != '[' ) 
16                    ){
17                        return false ;
18                    }
19                }
20        }
21        return arr.empty();
22    }
23};