// Last updated: 02/08/2026, 22:33:03
// Intersection of Two Arrays II - 350
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4
5        vector<int> ans;
6
7        for (int i = 0; i < nums1.size(); i++) {
8
9            for (int j = 0; j < nums2.size(); j++) {
10
11                if (nums1[i] == nums2[j]) {
12                    ans.push_back(nums1[i]);
13                    nums2[j] = -1;    
14                    break;
15                }
16            }
17        }
18
19        return ans;
20    }
21};