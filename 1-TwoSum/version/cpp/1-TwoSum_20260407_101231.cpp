// Last updated: 07/04/2026, 10:12:31
// A better Approach Of doing Majority Element [ n / 2 ] Problem Number -> 169
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        unordered_map <int, int> mp;
5
6        for(int num : nums){
7            mp[num]++;
8        }
9
10        int n = nums.size();
11
12        for(auto it : mp){
13            if(it.second > n/2){
14                return it.first;
15            }
16        }
17        return -1;
18    };
19
20};