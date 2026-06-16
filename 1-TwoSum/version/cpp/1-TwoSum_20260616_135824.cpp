// Last updated: 16/06/2026, 13:58:24
// Compare Version Numbers - 165
1class Solution {
2public:
3    int compareVersion(string v1, string v2) {
4        int i=0,j=0;
5        while(i<v1.size()||j<v2.size()){
6            int n1=0,n2=0;
7            while(i<v1.size()&&v1[i]!='.'){
8                n1=n1*10+(v1[i++]-'0');
9            }
10            while(j<v2.size()&&v2[j]!='.'){
11                n2=n2*10+(v2[j++]-'0');
12            }
13            if(n1>n2){
14                 return 1;
15            }
16            if(n1<n2) {
17                return -1;
18            }
19            i++;
20            j++;
21        }
22        return 0;
23    }
24};