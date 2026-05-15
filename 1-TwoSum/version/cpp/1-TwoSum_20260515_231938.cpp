// Last updated: 15/05/2026, 23:19:38
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        vector<bool> ans;
5
6        int maxi = *max_element(candies.begin(), candies.end());
7
8        for(int i = 0; i < candies.size(); i++) {
9            if(candies[i] + extraCandies >= maxi) {
10                ans.push_back(true);
11            }
12            else {
13                ans.push_back(false);
14            }
15        }
16        return ans;
17    }
18};