// Last updated: 13/04/2026, 15:29:22
// Remove Duplicates From Sorted Array Problem Number -> 26
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int i =0;
5
6        for(int j=1; j<nums.size(); j++){
7            if(nums[i] != nums[j]){
8                i++;
9                nums[i] = nums[j];
10            }
11        }
12        return i+1;
13    }
14};