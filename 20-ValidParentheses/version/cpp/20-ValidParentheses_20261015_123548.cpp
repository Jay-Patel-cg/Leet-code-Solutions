// Last updated: 15/10/2026, 12:35:48
// Valid Parentheses 20 using stack
1// class Solution {
2// public:
3//     bool isValid(string s) {
4//         vector<char>arr;
5//         for(char ch:s){
6//             if(ch == '(' || ch == '{' || ch == '['){ 
7//                 arr.push_back(ch);
8//             }
9//             else{                                 
10//                     if(arr.empty()) return false;
11//                     char temp = arr.back();
12//                     arr.pop_back();
13//                     if((ch ==')' && temp != '(' ) || 
14//                     (ch =='}' && temp != '{' ) ||
15//                     (ch ==']' && temp != '[' ) 
16//                     ){
17//                         return false ;
18//                     }
19//                 }
20//         }
21//         return arr.empty();
22//     }
23// };
24
25
26class Solution {
27public:
28    bool isValid(string s) {
29        stack<char> st;
30
31        for (int i = 0; i < s.length(); i++) {
32            char ch = s[i];
33
34            if (ch == '(' || ch == '{' || ch == '[') {
35                st.push(ch);
36            } 
37            else {
38                if (st.empty()) {
39                    return false;
40                }
41
42                char top = st.top();
43                st.pop();
44
45                if ((ch == ')' && top != '(') ||
46                    (ch == '}' && top != '{') ||
47                    (ch == ']' && top != '[')) {
48                    return false;
49                }
50            }
51        }
52
53        return st.empty();
54    }
55};
56
57
58
59
60
61
62
63
64
65
66
67
68