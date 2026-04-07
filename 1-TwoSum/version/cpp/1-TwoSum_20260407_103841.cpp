// Last updated: 07/04/2026, 10:38:41
// Moves Zero Problem Number -> 283
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int j = 0;
5        for(int i=0; i<nums.size(); ++i){
6            if(nums[i] != 0){
7                swap(nums[i],nums[j]);
8                ++j;
9            }
10        }
11    }
12};