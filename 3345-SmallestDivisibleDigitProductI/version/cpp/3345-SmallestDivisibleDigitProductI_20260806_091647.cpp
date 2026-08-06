// Last updated: 06/08/2026, 09:16:47
// Smallest Divisible Digit Product I - 3345
1class Solution {
2public:
3    int smallestNumber(int n, int t) {
4
5        while(true){
6        int product = 1;
7        int temp = n;
8
9        while(temp>0){
10            product *= (temp % 10);
11            temp /= 10;
12        }
13        if(product % t == 0){
14            return n;
15        } 
16        n++;
17        }
18    }
19};