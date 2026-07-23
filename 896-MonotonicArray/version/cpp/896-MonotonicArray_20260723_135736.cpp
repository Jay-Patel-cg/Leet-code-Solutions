// Last updated: 23/07/2026, 13:57:36
// 2 type of code - 896
1// class Solution {
2// public:
3//     bool isMonotonic(vector<int>& nums) {
4//         bool incrising = true;
5//         bool decreasing = true;
6
7//         for(int i=0; i < nums.size()-1 ; i++){
8//             if(nums[i] > nums[i+1]) incrising = false;
9//             if(nums[i] < nums[i+1]) decreasing = false;
10//         }
11//         return incrising || decreasing ;
12//     }
13// };
14
15
16
17// -> This is are 2 Same method with the diffrent code 
18
19
20
21class Solution {
22public:
23    bool isMonotonic(vector<int>& nums) {
24        bool incrising = true;
25        bool decreasing = true;
26
27        for(int i=1; i < nums.size() ; i++){
28            if(nums[i] < nums[i-1]) incrising = false;
29            if(nums[i] > nums[i-1]) decreasing = false;
30        }
31        return incrising || decreasing ;
32    }
33};
34