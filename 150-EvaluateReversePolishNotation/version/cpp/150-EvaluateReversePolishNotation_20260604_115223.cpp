// Last updated: 04/06/2026, 11:52:23
// Evaluate Reverse Polish Notation - 150
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int , vector<int>> st;
5
6        for(string s : tokens){
7            if(s == "+" || s == "-" || s == "*" || s == "/"){
8                int firstNumber = st.top();
9                st.pop();
10                int secondNumber = st.top();
11                st.pop();
12
13                int result = 0;
14
15                if(s == "+"){
16                    result = secondNumber + firstNumber ;
17                } else if(s == "-"){
18                    result = secondNumber - firstNumber;
19                } else if(s == "*"){
20                    result = secondNumber * firstNumber;
21                } else if(s == "/"){
22                    result = secondNumber / firstNumber;
23                }
24
25                st.push(result);
26            } else{
27                st.push(stoi(s));
28            }
29        }
30        return st.top();
31    }
32};
33// Method -> One stack check notbook 