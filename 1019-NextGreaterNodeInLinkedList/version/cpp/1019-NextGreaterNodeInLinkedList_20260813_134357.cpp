// Last updated: 13/08/2026, 13:43:57
// Next Greater Node In Linked List - 1019
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
13    vector<int> nextLargerNodes(ListNode* head) {
14        vector<int>ans;
15
16        ListNode* curr = head;
17        while(curr != nullptr){
18            ListNode* next = curr->next;
19            while(next != nullptr && next->val <= curr->val){
20                next = next ->next;
21            }
22            if(next != nullptr){
23                ans.push_back(next->val);
24            } else{
25                ans.push_back(0);
26            }
27            curr = curr->next;
28        }
29        return ans;
30    }
31};