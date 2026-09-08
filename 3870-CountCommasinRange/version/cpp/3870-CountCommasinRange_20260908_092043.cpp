// Last updated: 08/09/2026, 09:20:43
// Count Commas in Range - 3870
1class Solution {
2public:
3    int countCommas(int n) {
4        int count = 0;
5        for(int i=1; i<=n ; i++){
6            if(i>999){
7                count++;
8            }
9        }
10        return count;
11    }
12};