// Last updated: 09/09/2026, 14:04:53
// 268. Missing Number
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        for(int i=0; i<nums.size(); i++){
7            if(nums[i] != i){
8                return i;
9            }
10        }
11        return nums.size();
12    }
13};