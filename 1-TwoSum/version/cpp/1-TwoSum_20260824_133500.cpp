// Last updated: 24/08/2026, 13:35:00
// Linked List Cycle - 141
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
11    bool hasCycle(ListNode *head) {
12        ListNode* slow = head;
13        ListNode* fast = head;
14
15       while(fast != nullptr && fast->next != nullptr){
16
17        slow = slow -> next;
18        fast = fast -> next -> next;
19
20        if(slow == fast){
21            return true;
22        }
23       }
24       return false;
25    }
26};