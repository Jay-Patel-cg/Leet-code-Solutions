// Last updated: 11/08/2026, 14:10:17
// Delete Nodes From Linked List Present in Array - 3217
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
13    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
14      
15        unordered_set<int> si;
16
17        for(int value : nums){
18            si.insert(value);
19        }    
20
21        while(head !=nullptr && si.count(head->val)){
22            head = head->next;
23        }
24        ListNode* temp = head;
25
26        while(temp!=nullptr && temp->next != nullptr){
27            if(si.count(temp->next->val)){
28                temp -> next = temp->next->next;
29            } else{
30                temp = temp-> next;
31            }
32        }
33        return head;
34    }
35};