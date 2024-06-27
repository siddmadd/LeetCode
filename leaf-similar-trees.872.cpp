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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leafOne;
        vector<int>leafTwo;
        explore(root1, leafOne);
        explore(root2, leafTwo);
        if (leafTwo.size() != leafOne.size()) {return false;}
        for (int i = 0; i < leafOne.size(); ++i) {
            if (leafOne[i] != leafTwo[i]) {
                return false;
            }
        }
        return true;
    }

    //0 if nothing, 1 to pushback parent
    void explore (TreeNode* root, vector<int> &leaves) {
        if (root->left == nullptr && root->right == nullptr) {
            leaves.push_back(root->val);
        } else if (root->left == nullptr) {
            explore(root->right, leaves);
        } else if (root->right == nullptr) {
            explore(root->left, leaves);
        } else {
            explore(root->right, leaves);
            explore(root->left, leaves);
        }
    }
};