// Last updated: 23/07/2026, 14:23:13
// All on my own
1class Solution {
2public:
3    int countPairs(vector<int>& nums, int k) {
4        int count = 0;
5
6        for(int i=0 ; i< nums.size() ; i++){
7            for(int j=i+1; j < nums.size() ; j++){
8                if((nums[i] == nums[j]) && ((i*j) % k == 0)){
9                    count++;
10                }
11            }
12        }
13        return count;
14    }
15};