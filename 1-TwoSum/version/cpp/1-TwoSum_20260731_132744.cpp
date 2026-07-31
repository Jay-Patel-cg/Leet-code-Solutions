// Last updated: 31/07/2026, 13:27:44
// Defuse the Bomb - 1652
1class Solution {
2public:
3    vector<int> decrypt(vector<int>& code, int k) {
4
5
6        int n = code.size();
7        vector<int> ans(n,0);
8
9        if(k==0){
10            return ans;
11        }
12
13
14        for(int i=0; i < n; i++){
15            int sum = 0;
16            if(k > 0){
17                for(int j=1 ; j<=k; j++){
18                    sum += code[(i+j) % n];
19                }
20            } else{
21                for(int j=1; j<= -k; j++){
22                    sum += code[(i-j+n) % n];
23                }
24            }
25            ans[i] = sum;
26        }
27        return ans;
28    }
29};