// Last updated: 08/09/2026, 09:29:41
// Array Partition - 561
1class Solution {
2public:
3    int arrayPairSum(vector<int>& nums) {
4        sort(nums.begin() , nums.end());
5        int sum = 0;
6        for(int i=0; i<nums.size(); i+=2){
7            sum += nums[i];
8        }
9        return sum;
10    }
11};