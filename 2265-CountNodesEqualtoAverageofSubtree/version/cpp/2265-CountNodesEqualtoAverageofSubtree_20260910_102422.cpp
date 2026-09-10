// Last updated: 10/09/2026, 10:24:22
// 2265. Count Nodes Equal to Average of Subtree
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
13    int matchingCount = 0;
14
15    // Helper function returns pair<sum of subtree, count of nodes in subtree>
16    pair<int, int> dfs(TreeNode* node) {
17        if (!node) return {0, 0};
18
19        auto left = dfs(node->left);
20        auto right = dfs(node->right);
21
22        int currentSum = node->val + left.first + right.first;
23        int currentCount = 1 + left.second + right.second;
24
25        if (currentSum / currentCount == node->val) {
26            matchingCount++;
27        }
28
29        return {currentSum, currentCount};
30    }
31
32public:
33    int averageOfSubtree(TreeNode* root) {
34        dfs(root);
35        return matchingCount;
36    }
37};