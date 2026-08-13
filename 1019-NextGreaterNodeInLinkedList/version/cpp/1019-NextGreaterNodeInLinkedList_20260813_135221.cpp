// Last updated: 13/08/2026, 13:52:21
// Next Greater Node In Linked List - 1019 Using Vector Push_back Node in a Vector and than compare that
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
11
12//  Normal Method Using Node 
13
14
15// class Solution {
16// public:
17//     vector<int> nextLargerNodes(ListNode* head) {
18//         vector<int>ans;
19
20//         ListNode* curr = head;
21//         while(curr != nullptr){
22//             ListNode* next = curr->next;
23//             while(next != nullptr && next->val <= curr->val){
24//                 next = next ->next;
25//             }
26//             if(next != nullptr){
27//                 ans.push_back(next->val);
28//             } else{
29//                 ans.push_back(0);
30//             }
31//             curr = curr->next;
32//         }
33//         return ans;
34//     }
35// };
36
37
38//  Using Vector pushing Node in a Vector....
39
40class Solution {
41public:
42    vector<int> nextLargerNodes(ListNode* head) {
43        vector<int>temp;
44        while(head != nullptr){
45            temp.push_back(head->val);
46            head = head -> next;
47        }
48
49        vector<int>ans(temp.size(), 0);
50
51        for(int i=0;  i<temp.size(); i++){
52            for(int j=i+1 ; j<temp.size(); j++){
53                if(temp[j] > temp[i]){
54                    ans[i] = temp[j];
55                    break;
56                }
57            }
58        }
59        return ans;
60    }
61};