// Last updated: 12/08/2026, 13:06:06
// Partition List - 86
1class Solution {
2public:
3    ListNode* partition(ListNode* head, int x) {
4        ListNode lessHead(0);
5        ListNode greaterHead(0);
6        
7        ListNode* less = &lessHead;
8        ListNode* greater = &greaterHead;
9        
10        ListNode* curr = head;
11        while (curr != nullptr) {
12            if (curr->val < x) {
13                less->next = curr;
14                less = less->next;
15            } else {
16                greater->next = curr;
17                greater = greater->next;
18            }
19            curr = curr->next;
20        }
21        
22        greater->next = nullptr;
23        less->next = greaterHead.next;
24        
25        return lessHead.next;
26    }
27};