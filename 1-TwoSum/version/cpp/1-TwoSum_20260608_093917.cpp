// Last updated: 08/06/2026, 09:39:17
// Summary Ranges - 228
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string>ans;
5
6        int n = nums.size();
7
8        for(int i=0; i<n ; i++){
9            
10            int start = nums[i];
11
12            while(i+1 < n && nums[i+1] == nums[i] + 1){
13                i++;
14            }
15
16            int end = nums[i];
17
18            if(start == end){
19                ans.push_back(to_string(start));
20            }
21            else{
22                ans.push_back(to_string(start) + "->" + to_string(end));
23            }
24
25        }
26        return ans;
27    }
28};