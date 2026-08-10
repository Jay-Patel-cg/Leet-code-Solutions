// Last updated: 10/08/2026, 13:25:33
// Rotate List - 61
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
13    ListNode* rotateRight(ListNode* head, int k) {
14        if (!head) return head;
15
16        int length = 1;
17        ListNode* temp = head;
18
19        while (temp->next) {
20            temp = temp->next;
21            length++;
22        }
23
24        int position = k % length;
25        if (position == 0) return head;
26
27        ListNode* current = head;
28        for (int i = 0; i < length - position - 1; ++i) {
29            current = current->next;
30        }
31
32        ListNode* newHead = current->next;
33        current->next = nullptr;
34        temp->next = head;
35
36        return newHead;        
37    }
38};