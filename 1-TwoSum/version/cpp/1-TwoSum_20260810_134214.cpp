// Last updated: 10/08/2026, 13:42:14
// we cannot move head so we take temp
1class Solution {
2public:
3    int getDecimalValue(ListNode* head) {
4        int ans = 0;
5        ListNode* temp = head;
6        while(temp != nullptr){
7            ans = ans * 2 + temp->val;
8            temp = temp->next;
9        }
10        
11        return ans;
12    }
13};