/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        AddLeftLeaves(root, false, sum);
        return sum;
    }

    void AddLeftLeaves(TreeNode* node, bool leftNode, int& sum) {
        if (node == nullptr) {
            return;
        }

        if (node->left == nullptr && node->right == nullptr && leftNode) {
            sum += node->val;
        }
        AddLeftLeaves(node->left, true, sum);
        AddLeftLeaves(node->right, false, sum);
    }
};