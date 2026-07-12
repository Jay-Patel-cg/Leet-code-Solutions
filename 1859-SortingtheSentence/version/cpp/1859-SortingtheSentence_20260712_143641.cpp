// Last updated: 12/07/2026, 14:36:41
// Search in a Binary Search Tree - 700
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    TreeNode* searchBST(TreeNode* root, int val) {
15        if (root == nullptr || root->val == val)
16            return root;
17
18        if (val < root->val)
19            return searchBST(root->left, val);
20
21        return searchBST(root->right, val);
22    }
23};