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
    TreeNode* func(vector<int>& nums, int start, int end) {
        if (start >= end) return NULL;
        int mid = (start + end) / 2;
        TreeNode* treeNode = new TreeNode(nums[mid]);
        treeNode->left = func(nums, start, mid);
        treeNode->right = func(nums, mid+1, end);
        return treeNode;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return func(nums, 0, nums.size());
    }
};