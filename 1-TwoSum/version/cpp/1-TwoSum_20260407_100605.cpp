// Last updated: 07/04/2026, 10:06:05
// Majority elements [ n / 2 ] Problem number -> 169
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        unordered_map <int, int> res;
5
6        for(int i = 0; i<nums.size(); i++){
7            res[nums[i]] = res[nums[i]] + 1;
8        }
9
10        int majority = nums.size()/2;
11
12        for(auto it : res){
13            if(it.second > majority){
14                return it.first;
15            }
16        }
17        return -1;
18    };
19
20};