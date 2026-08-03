// Last updated: 03/08/2026, 14:23:43
// Remove Nth Node From End of List - 19
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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14
15        ListNode* temp = head;
16        int count = 0;
17
18        while (temp != nullptr) {
19            count++;
20            temp = temp->next;
21        }
22
23        int position = count - n + 1;
24
25        if (position == 1) {
26            ListNode* newHead = head->next;
27            delete head;
28            return newHead;
29        }
30
31        temp = head;
32
33        for (int i = 1; i < position - 1; i++) {
34            temp = temp->next;
35        }
36
37        ListNode* nodeToDelete = temp->next;
38        temp->next = nodeToDelete->next;
39        delete nodeToDelete;
40
41        return head;
42    }
43};