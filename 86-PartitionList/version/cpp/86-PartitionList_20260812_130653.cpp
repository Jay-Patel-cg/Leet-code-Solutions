// Last updated: 12/08/2026, 13:06:53
// Remove Linked List Elements - 203
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* removeElements(ListNode* head, int val) {
14        ListNode dummy(0, head);
15        ListNode* curr = &dummy;
16        
17        while (curr->next != nullptr) {
18            if (curr->next->val == val) {
19                curr->next = curr->next->next;
20            } else {
21                curr = curr->next;
22            }
23        }
24        
25        return dummy.next;
26    }
27};