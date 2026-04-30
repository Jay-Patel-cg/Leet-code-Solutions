// Last updated: 30/04/2026, 10:54:47
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4         
5        int minPrice = INT_MAX;
6        int maxProfit = 0;
7
8        for(int price : prices) {
9            if(price < minPrice) minPrice = price;
10            int profit = price - minPrice;
11            if(profit > maxProfit) maxProfit = profit;
12        }
13        return maxProfit;
14    }
15};