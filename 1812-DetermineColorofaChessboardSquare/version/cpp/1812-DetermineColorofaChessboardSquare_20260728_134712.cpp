// Last updated: 28/07/2026, 13:47:12
// new code - 1812
1class Solution {
2public:
3    bool squareIsWhite(string coordinates) {
4        // int col = coordinates[0] - 'a' + 1;
5        // int row = coordinates[1] - '0';
6
7        // return (col + row) % 2 == 1;
8
9        return (coordinates[0] + coordinates[1]) %2 !=0 ;
10    }
11};