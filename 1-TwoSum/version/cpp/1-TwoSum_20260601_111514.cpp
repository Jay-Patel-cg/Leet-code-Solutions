// Last updated: 01/06/2026, 11:15:14
// Online Stock Span - 901
1class StockSpanner {
2public:
3    stack<pair<int,int>> st;
4    StockSpanner() {
5        
6    }
7    
8    int next(int price) {
9        
10        int span = 1;
11
12        while(!st.empty() && st.top().first <= price){
13
14            span += st.top().second;
15
16            st.pop();
17
18        }
19
20        st.push({price,span});
21
22        return span;
23
24    }
25};
26
27/**
28 * Your StockSpanner object will be instantiated and called as such:
29 * StockSpanner* obj = new StockSpanner();
30 * int param_1 = obj->next(price);
31 */