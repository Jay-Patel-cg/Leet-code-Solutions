// Last updated: 14/09/2026, 22:33:17
// 836. Rectangle Overlap
1class Solution {
2public:
3    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
4        return (min(rec1[2], rec2[2]) > max(rec1[0], rec2[0])) &&
5               (min(rec1[3], rec2[3]) > max(rec1[1], rec2[1]));
6    }
7};