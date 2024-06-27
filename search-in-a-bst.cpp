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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* temp = root;
        while (temp->val != val) {
            if (temp->val > val) {
                if (temp->left == nullptr) {
                    return nullptr;
                }
                temp = temp->left;
            } else {
                if (temp->right == nullptr) {
                    return nullptr;
                }
                temp = temp->right;
            }
        }
        return temp;
    }
};