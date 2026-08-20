// Last updated: 20/08/2026, 11:41:45
// Distribute Elements Into Two Arrays I - 3069
1class Solution {
2public:
3    vector<int> resultArray(vector<int>& nums) {
4        vector<int> arr1, arr2;
5        arr1.push_back(nums[0]);
6        arr2.push_back(nums[1]);
7
8        for (int i = 2; i < nums.size(); ++i) {
9            if (arr1.back() > arr2.back()) {
10                arr1.push_back(nums[i]);
11            } else {
12                arr2.push_back(nums[i]);
13            }
14        }
15
16        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
17        return arr1;
18    }
19};