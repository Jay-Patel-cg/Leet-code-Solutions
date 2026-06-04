// Last updated: 04/06/2026, 11:06:54
// Decode String - 394
1class Solution {
2public:
3    string decode(string &s, int &i) {
4        string res="";
5        while (i<s.size()&&s[i]!=']'){
6            if (isalpha(s[i])){
7                res += s[i];
8                i++;
9            }
10            else if (isdigit(s[i])){
11                int num = 0;
12                while (i<s.size()&&isdigit(s[i])){
13                    num=num*10+(s[i]-'0');
14                    i++;
15                }
16                i++; // skip '['
17                string temp = decode(s, i);
18                i++; // skip ']'
19                while (num){
20                    res+=temp;
21                    num--;
22                }
23            }
24        }
25        return res;
26    }
27    string decodeString(string s){
28        int i = 0;
29        return decode(s,i);
30    }
31};