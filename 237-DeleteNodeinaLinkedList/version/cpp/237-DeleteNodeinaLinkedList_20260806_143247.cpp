// Last updated: 06/08/2026, 14:32:47
// Design Linked List - 707
1class MyLinkedList {
2private:
3    struct Node {
4        int val;
5        Node* next;
6        Node(int v) : val(v), next(nullptr) {}
7    };
8
9    Node* dummyHead;
10    int size;
11
12public:
13    MyLinkedList() {
14        dummyHead = new Node(0);
15        size = 0;
16    }
17    
18    int get(int index) {
19        if (index < 0 || index >= size) {
20            return -1;
21        }
22        
23        Node* curr = dummyHead->next;
24        for (int i = 0; i < index; ++i) {
25            curr = curr->next;
26        }
27        return curr->val;
28    }
29    
30    void addAtHead(int val) {
31        addAtIndex(0, val);
32    }
33    
34    void addAtTail(int val) {
35        addAtIndex(size, val);
36    }
37    
38    void addAtIndex(int index, int val) {
39        if (index > size) {
40            return;
41        }
42        if (index < 0) {
43            index = 0;
44        }
45        
46        Node* prev = dummyHead;
47        for (int i = 0; i < index; ++i) {
48            prev = prev->next;
49        }
50        
51        Node* newNode = new Node(val);
52        newNode->next = prev->next;
53        prev->next = newNode;
54        size++;
55    }
56    
57    void deleteAtIndex(int index) {
58        if (index < 0 || index >= size) {
59            return;
60        }
61        
62        Node* prev = dummyHead;
63        for (int i = 0; i < index; ++i) {
64            prev = prev->next;
65        }
66        
67        Node* toDelete = prev->next;
68        prev->next = toDelete->next;
69        delete toDelete;
70        size--;
71    }
72};