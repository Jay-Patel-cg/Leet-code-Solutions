// Last updated: 08/06/2026, 09:50:01
// Summary Ranges - 228 (100%)
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string>ans;
5
6        for(int i=0; i<nums.size() ; i++){
7            
8            int start = nums[i];
9
10            while(i+1 < nums.size() && nums[i+1] == nums[i] + 1){
11                i++;
12            }
13
14            int end = nums[i];
15
16            if(start == end){
17                ans.push_back(to_string(start));
18            }
19            else{
20                ans.push_back(to_string(start) + "->" + to_string(end));
21            }
22
23        }
24        return ans;
25    }
26};