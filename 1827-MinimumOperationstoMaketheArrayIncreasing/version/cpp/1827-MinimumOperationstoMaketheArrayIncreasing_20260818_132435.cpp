// Last updated: 18/08/2026, 13:24:35
// Minimum Operations to Make the Array Increasing - 1827
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        int count = 0;
5        for(int i=1; i<nums.size(); i++){
6            if(nums[i] <= nums[i-1]){
7
8                int dig = nums[i-1] + 1 - nums[i]; 
9
10                count += dig;
11
12                nums[i] = nums[i-1] + 1;
13            }
14        }
15        return count;
16    }
17};