// Last updated: 05/06/2026, 14:53:08
// Remove All Adjacent Duplicates In String - 1047
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        stack<char> st;
5        
6        for(char ch : s){
7            if(!st.empty() && st.top() == ch){
8                st.pop();
9            } else{
10                st.push(ch);
11            }
12        }
13        string res = "";
14
15        while(!st.empty()){
16            res += st.top();
17            st.pop();
18        }
19
20        reverse(res.begin() , res.end());
21
22        return res;
23
24    }
25};