// Last updated: 15/06/2026, 11:45:20
// Sum of Unique Elements - 1748
1class Solution {
2public:
3    int sumOfUnique(vector<int>& nums) {
4        unordered_map<int, int> mp;
5
6        for(int i = 0; i < nums.size(); i++)
7            mp[nums[i]]++;
8
9        int sum = 0;
10        
11        for(auto element : mp)
12            if(element.second == 1)
13                sum += element.first;
14
15        return sum;
16    }
17};