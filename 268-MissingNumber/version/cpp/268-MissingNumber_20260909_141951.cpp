// Last updated: 09/09/2026, 14:19:51
// 268. Missing Number - 100%%%%%
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        // sort(nums.begin(), nums.end());
5
6        // for(int i=0; i<nums.size(); i++){
7        //     if(nums[i] != i){
8        //         return i;
9        //     }
10        // }
11        // return nums.size();
12
13
14        int n = nums.size();
15        int sum = n*(n+1)/2;
16        int actualSum = 0;
17
18        for(int i=0; i<nums.size(); i++){
19            actualSum += nums[i];
20        }
21        return sum - actualSum;
22    }
23};