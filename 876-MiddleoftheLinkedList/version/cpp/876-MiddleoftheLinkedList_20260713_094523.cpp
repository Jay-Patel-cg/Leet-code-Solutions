// Last updated: 13/07/2026, 09:45:23
// Robot Return to Origin - 657
1class Solution {
2public:
3    bool judgeCircle(string moves) {
4        int x = 0, y = 0;
5
6        for (char move : moves) {
7            if (move == 'U')
8                y++;
9            else if (move == 'D')
10                y--;
11            else if (move == 'L')
12                x--;
13            else
14                x++;
15        }
16
17        return (x == 0 && y == 0);
18    }
19};