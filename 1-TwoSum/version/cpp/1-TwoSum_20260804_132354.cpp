// Last updated: 04/08/2026, 13:23:54
// Remove Duplicate from Sorted List - 83
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
14         if(head == nullptr){
15            return head;
16        }
17        ListNode* current = head;
18
19        while(current-> next != nullptr){
20            if(current->val == current->next->val){
21                ListNode* duplicate = current->next;
22                current->next = current->next->next;
23                delete duplicate;
24            } else{
25                current= current->next;
26            }
27        }
28        return head;
29    }
30};