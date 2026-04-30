// Last updated: 30/04/2026, 11:58:31
// Daily Temperatures -> Problem Number 739
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n = temperatures.size();
5        vector<int>ans(n,0);
6        vector <int>index;
7        for(int i = 0; i < temperatures.size() ; ++i){
8            while(!index.empty() && temperatures[i] > temperatures[index.back()]){
9                int indice = index.back();
10                index.pop_back();
11                ans[indice] = i - indice;
12            };
13        index.push_back(i);
14        }
15        return ans;
16    }
17};