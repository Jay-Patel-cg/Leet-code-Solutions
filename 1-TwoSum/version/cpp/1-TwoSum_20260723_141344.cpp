// Last updated: 23/07/2026, 14:13:44
// Count Equal and Divisible Pairs in an Array - 2176
1class Solution {
2public:
3    int countPairs(vector<int>& nums, int k) {
4        int count = 0;
5
6        for(int i=0 ; i< nums.size() ; i++){
7            for(int j=i+1; j < nums.size() ; j++){
8                if(nums[i] == nums[j]){
9                    if((i*j) % k == 0){
10                        count++;
11                    }
12                }
13            }
14        }
15        return count;
16    }
17};