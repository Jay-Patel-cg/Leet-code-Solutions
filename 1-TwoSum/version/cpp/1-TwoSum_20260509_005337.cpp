// Last updated: 09/05/2026, 00:53:37
// Convert Binary Number in a Linked List to Integer - 1290
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