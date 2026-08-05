// Last updated: 05/08/2026, 13:18:27
// Palindrome Linked List - 234
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
13    bool isPalindrome(ListNode* head) {
14        vector<int> arr;
15        ListNode* temp = head;
16
17        while(temp != nullptr){
18            arr.push_back(temp->val);
19            temp = temp->next;
20        }
21
22        int i=0;
23        int j = arr.size()-1;
24
25        while(i<j){
26            if(arr[i] != arr[j]){
27                return false;
28            }
29            i++;
30            j--;
31        }
32        return true;
33    }
34};