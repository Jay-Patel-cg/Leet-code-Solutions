// Last updated: 23/07/2026, 14:02:28
// Merge Sorted Array - 88
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4
5        int i = m - 1;          
6        int j = n - 1;          
7        int k = m + n - 1;      
8
9        while (i >= 0 && j >= 0) {
10
11            if (nums1[i] > nums2[j]) {
12                nums1[k] = nums1[i];
13                i--;
14            } else {
15                nums1[k] = nums2[j];
16                j--;
17            }
18
19            k--;
20        }
21
22        while (j >= 0) {
23            nums1[k] = nums2[j];
24            j--;
25            k--;
26        }
27    }
28};