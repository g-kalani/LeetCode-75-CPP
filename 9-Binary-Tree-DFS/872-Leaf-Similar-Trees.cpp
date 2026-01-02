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
    void getLeafValues(TreeNode* node, std::vector<int>& nodeList) {
        if (!node) {
            return;
        }

        if (!node->left && !node->right) {
            nodeList.push_back(node->val);
            return;
        }

        getLeafValues(node->left, nodeList);
        getLeafValues(node->right, nodeList);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> nodeList1, nodeList2;
        getLeafValues(root1, nodeList1);
        getLeafValues(root2, nodeList2);
        return nodeList1 == nodeList2;
    }
};
