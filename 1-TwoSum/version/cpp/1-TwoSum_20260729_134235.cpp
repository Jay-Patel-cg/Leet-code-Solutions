// Last updated: 29/07/2026, 13:42:35
// 3Sum Closest - 16
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5
6        int n = nums.size();
7        int ans = nums[0] + nums[1] + nums[2];
8        for(int i=0; i<n-2; i++){
9            int left = i+1;
10            int right = n-1;
11
12            while(left < right){
13                int sum = nums[i] + nums[left] + nums[right];
14
15                if(abs(target - sum) < abs(target - ans)){
16                    ans = sum;
17                }
18                if(target == sum){
19                    return sum;
20                } else if(target > sum){
21                    left++;
22                }else{
23                    right--;
24                }
25            }
26        }      
27        return ans;
28    }
29};