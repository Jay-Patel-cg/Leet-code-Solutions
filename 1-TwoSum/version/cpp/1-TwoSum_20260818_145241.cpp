// Last updated: 18/08/2026, 14:52:41
// Odd Even Linked List - 328
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
13    ListNode* oddEvenList(ListNode* head) {
14        if (!head || !head->next) return head;
15
16        ListNode* odd = head;
17        ListNode* even = head->next;
18        ListNode* evenHead = even;
19
20        while (even && even->next) {
21            odd->next = even->next;
22            odd = odd->next;
23            even->next = odd->next;
24            even = even->next;
25        }
26
27        odd->next = evenHead;
28        return head;
29    }
30};