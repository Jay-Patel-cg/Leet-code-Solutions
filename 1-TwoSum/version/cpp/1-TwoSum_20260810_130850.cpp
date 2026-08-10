// Last updated: 10/08/2026, 13:08:50
1class Solution {
2public:
3    int getDecimalValue(ListNode* head) {
4        int ans = 0;
5        
6        while(head != nullptr){
7            ans = ans * 2 + head->val;
8            head = head->next;
9        }
10        
11        return ans;
12    }
13};