// Last updated: 04/08/2026, 13:58:25
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9// class Solution {
10// public:
11//     void deleteNode(ListNode* node) {
12//        node->val = node->next->val;
13//        ListNode* temp = node->next;
14//        node->next = node->next->next;
15//        delete temp;
16//     }
17// };
18
19
20// Second method.........
21
22
23/**
24 * Definition for singly-linked list.
25 * struct ListNode {
26 *     int val;
27 *     ListNode *next;
28 *     ListNode(int x) : val(x), next(NULL) {}
29 * };
30 */
31class Solution {
32public:
33    void deleteNode(ListNode* node) {
34       node->val = node->next->val;
35       ListNode* temp = node->next;
36       node->next = node->next->next;
37       delete temp;
38    }
39};