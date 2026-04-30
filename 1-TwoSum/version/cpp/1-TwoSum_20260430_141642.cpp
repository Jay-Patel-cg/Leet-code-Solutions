// Last updated: 30/04/2026, 14:16:42
// Number of Employees Who Met the Target -> Problem num -> 2798
1class Solution {
2public:
3    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
4        int count = 0;
5        for(int val : hours){
6            if(val >= target){
7                ++count;
8            }
9        }
10        return count;
11    }
12};