// Last updated: 08/06/2026, 10:34:26
// Contains Duplicate II - 219
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_set<int> st;
5
6        for(int i=0; i <nums.size(); i++){
7            if(st.count(nums[i])){
8                return true;
9            }
10            st.insert(nums[i]);
11
12            if(st.size() > k){
13                st.erase(nums[i-k]);
14            }
15        }
16        return false ;
17    }
18};