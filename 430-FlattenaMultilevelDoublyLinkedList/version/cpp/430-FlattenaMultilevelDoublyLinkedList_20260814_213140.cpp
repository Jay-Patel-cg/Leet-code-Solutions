// Last updated: 14/08/2026, 21:31:40
// Flatten a Multilevel Doubly Linked List - 430
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* prev;
7    Node* next;
8    Node* child;
9};
10*/
11
12class Solution {
13public:
14    Node* flatten(Node* head) {
15        Node* curr = head;
16        while (curr != nullptr) {
17            if (curr->child != nullptr) {
18                Node* nextNode = curr->next;
19                Node* childHead = flatten(curr->child);
20                
21                curr->next = childHead;
22                childHead->prev = curr;
23                curr->child = nullptr;
24                
25                Node* tail = childHead;
26                while (tail->next != nullptr) {
27                    tail = tail->next;
28                }
29                
30                tail->next = nextNode;
31                if (nextNode != nullptr) {
32                    nextNode->prev = tail;
33                }
34            }
35            curr = curr->next;
36        }
37        return head;
38    }
39};