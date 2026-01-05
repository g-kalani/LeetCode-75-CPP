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
    int helper(TreeNode* root, int curLength, bool isLeft) {
        if (!root) return curLength;
        return max(helper(root->left, isLeft ? 0 : curLength + 1, true), helper(root->right, !isLeft ? 0 : curLength + 1, false));
    }

    int longestZigZag(TreeNode* root) {
        return max(helper(root->left, 0, true), helper(root->right, 0, false));
    }
};
