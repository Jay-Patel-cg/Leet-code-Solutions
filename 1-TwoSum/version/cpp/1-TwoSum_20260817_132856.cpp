// Last updated: 17/08/2026, 13:28:56
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) {
4        sort(nums.begin() , nums.end());
5        int res = 0;
6        
7        for(int i=1; i<nums.size(); i++){
8            if(nums[i] <= nums[i-1]){
9                int newVal = nums[i-1]+1;
10
11                res+= newVal - nums[i];
12
13                nums[i] = newVal;
14            }
15        }
16        return res;
17    }
18};