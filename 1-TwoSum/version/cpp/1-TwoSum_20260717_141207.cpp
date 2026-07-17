// Last updated: 17/07/2026, 14:12:07
// Find the Duplicate Number - 287
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        unordered_map<int , int> mp;
5
6        for(auto i :nums){
7            if(mp[i]==0){
8                mp[i] = 1;
9            } else{
10                return i;
11            }
12        }
13        return -1;
14    }
15};