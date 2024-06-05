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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {return root;}
        if (root->right == nullptr && root->left == nullptr) {
            return root;
        }
        TreeNode* temp = root->right;
        root->right = root->left;
        root->left = temp;
        if (root->right != nullptr) {
            invertTree(root->right);
        }
        if (root->left != nullptr) {
            invertTree(root->left);
        }
        return root;
    }
};