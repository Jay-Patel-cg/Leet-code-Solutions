// Last updated: 10/08/2026, 13:17:41
// Search in Rotated Sorted Array II - 81
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4        int i = 0;
5        while(i<nums.size()){
6            if(nums[i] == target){
7                return true;
8            }
9            i++;
10        }
11        return false;
12    }
13};