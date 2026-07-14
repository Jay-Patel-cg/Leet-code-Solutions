// Last updated: 14/07/2026, 14:59:14
// Max Consecutive Ones III - 1004
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4        int left = 0, zeroCount = 0 , maxLength = 0;
5
6        for(int right = 0; right < nums.size(); right++){
7            if(nums[right] == 0) zeroCount++;
8            while(zeroCount > k){
9                if(nums[left] == 0) zeroCount--; left++;
10            }
11            maxLength = max(maxLength, right - left + 1);
12        }
13        return maxLength;
14    }
15};