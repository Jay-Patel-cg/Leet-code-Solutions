// Last updated: 01/10/2026, 09:55:47
// 21. Merge Two Sorted Lists
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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        
15        ListNode* temp = new ListNode();
16
17        ListNode* current = temp;
18
19
20        while(list1 != nullptr && list2 != nullptr){
21            if(list1->val <= list2->val){
22
23                current -> next = list1;
24                list1 = list1 -> next;
25            } else {
26                current->next = list2;
27                list2 = list2->next;
28            }
29            
30            current = current -> next;
31
32        }
33
34
35        if(list1 != nullptr){
36            current->next = list1;
37        } else {
38            current->next = list2;
39        }
40
41        return temp->next;
42
43    }
44};