// Last updated: 08/09/2026, 09:54:59
// . Minimum Number of Moves to Seat Everyone - 2037
1class Solution {
2public:
3    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
4
5        int count = 0;
6        sort(seats.begin(), seats.end());
7        sort(students.begin(), students.end());
8
9        for(int i=0; i<seats.size();i++){
10            if(seats[i] != students[i]){
11                int temp = abs(seats[i] - students[i]);
12                count += temp;
13            }
14        }
15        return count;
16    }
17};