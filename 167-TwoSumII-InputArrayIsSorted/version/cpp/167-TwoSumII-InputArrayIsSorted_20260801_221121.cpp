// Last updated: 01/08/2026, 22:11:21
// Two Sum II - Input Array Is Sorted - 167
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4
5        int n = numbers.size();
6
7        int left = 0;
8        int right = n-1;
9        int sum = 0;
10
11        while(left < right){
12            sum = numbers[left] + numbers[right];
13            if(sum == target){
14                return {left + 1 , right + 1};
15            } else if(sum < target){
16                left ++;
17            } else{
18                right--;
19            }
20        }
21        return {};
22    }
23};