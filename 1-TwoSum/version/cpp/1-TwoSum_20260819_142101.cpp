// Last updated: 19/08/2026, 14:21:01
// Reverse Nodes in Even Length Groups - 2074
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
13    ListNode* reverseEvenLengthGroups(ListNode* head) {
14        ListNode* curr = head;
15        ListNode* prevGroupTail = nullptr;
16        int groupSize = 1;
17
18        while (curr != nullptr) {
19            ListNode* temp = curr;
20            int len = 0;
21
22            while (temp != nullptr && len < groupSize) {
23                temp = temp->next;
24                len++;
25            }
26
27            if (len % 2 == 0) {
28                ListNode* prev = nullptr;
29                ListNode* node = curr;
30
31                for (int i = 0; i < len; i++) {
32                    ListNode* next = node->next;
33                    node->next = prev;
34                    prev = node;
35                    node = next;
36                }
37
38                curr->next = node;
39
40                if (prevGroupTail != nullptr) {
41                    prevGroupTail->next = prev;
42                } else {
43                    head = prev;
44                }
45
46                prevGroupTail = curr;
47            } else {
48                prevGroupTail = curr;
49
50                for (int i = 1; i < len; i++) {
51                    prevGroupTail = prevGroupTail->next;
52                }
53            }
54
55            curr = temp;
56            groupSize++;
57        }
58
59        return head;
60    }
61};