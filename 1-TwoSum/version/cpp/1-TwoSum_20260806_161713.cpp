// Last updated: 06/08/2026, 16:17:13
// Swap Nodes in Pairs - 24
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
13    ListNode* swapPairs(ListNode* head) {
14        if(!head || !head->next){
15            return head;
16        }
17
18        ListNode* second = head->next;
19        head->next = swapPairs(second->next);
20        second->next = head;
21
22        return second;
23    }
24};