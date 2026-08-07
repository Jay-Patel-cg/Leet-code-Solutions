// Last updated: 07/08/2026, 14:34:15
// Remove Duplicates from Sorted List II - 82
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
13    ListNode* deleteDuplicates(ListNode* head) {
14
15        ListNode* dummy = new ListNode(0);
16        dummy->next = head;
17
18        ListNode* prev = dummy;
19
20        while (head != NULL) {
21
22            if (head->next != NULL && head->val == head->next->val) {
23
24                int value = head->val;
25
26                while (head != NULL && head->val == value) {
27                    head = head->next;
28                }
29
30                prev->next = head;
31            }
32            else {
33                prev = head;
34                head = head->next;
35            }
36        }
37
38        return dummy->next;
39    }
40};