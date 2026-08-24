// Last updated: 24/08/2026, 13:43:13
// Linked List Cycle II - 142
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *detectCycle(ListNode *head) {
12        ListNode* slow = head;
13        ListNode* fast = head;
14
15        while(fast != nullptr && fast->next != nullptr ){
16            slow = slow->next;
17            fast = fast->next->next;
18            if(slow==fast){
19                break;
20            }
21        }
22
23        if(fast== nullptr || fast->next == nullptr) return nullptr;
24
25        slow = head;
26
27        while(slow != fast){
28            slow = slow->next;
29            fast = fast->next;
30        }
31        return slow;
32    }
33};