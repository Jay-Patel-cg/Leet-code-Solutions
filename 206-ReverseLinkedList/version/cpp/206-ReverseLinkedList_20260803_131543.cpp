// Last updated: 03/08/2026, 13:15:43
// Reverse Linked List -206
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
13    ListNode* reverseList(ListNode* head) {
14        ListNode* temp = nullptr;
15        ListNode* curr = head;
16        ListNode* next = nullptr;
17
18        while(curr != nullptr){
19            next = curr->next;
20            curr->next = temp;
21            temp = curr;
22            curr = next;
23        }
24        return temp;
25    }
26};