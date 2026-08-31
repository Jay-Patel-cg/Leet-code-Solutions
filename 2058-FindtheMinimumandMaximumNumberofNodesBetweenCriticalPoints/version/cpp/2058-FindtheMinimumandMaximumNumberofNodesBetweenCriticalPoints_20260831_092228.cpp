// Last updated: 31/08/2026, 09:22:28
// Find the Minimum and Maximum Number of Nodes Between Critical Points - 2058
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
13    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
14        if (!head || !head->next || !head->next->next) {
15            return {-1, -1};
16        }
17
18        int firstCritical = -1;
19        int prevCritical = -1;
20        int minDistance = INT_MAX;
21        
22        ListNode* prev = head;
23        ListNode* curr = head->next;
24        int index = 1;
25
26        while (curr->next) {
27            if ((curr->val > prev->val && curr->val > curr->next->val) ||
28                (curr->val < prev->val && curr->val < curr->next->val)) {
29                
30                if (firstCritical == -1) {
31                    firstCritical = index;
32                } else {
33                    minDistance = min(minDistance, index - prevCritical);
34                }
35                prevCritical = index;
36            }
37            prev = curr;
38            curr = curr->next;
39            index++;
40        }
41
42        if (firstCritical == -1 || prevCritical == firstCritical) {
43            return {-1, -1};
44        }
45
46        return {minDistance, prevCritical - firstCritical};
47    }
48};