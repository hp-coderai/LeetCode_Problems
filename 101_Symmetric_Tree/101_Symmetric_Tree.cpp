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
    bool isSymmetric(TreeNode* root) {
        return IsMirror(root->left, root->right);
    }

    bool IsMirror(TreeNode* lft, TreeNode* rt) {
        if (!lft && !rt) { return true;}
        if (!lft || !rt) {return false;}

        return lft->val == rt->val && IsMirror(lft->left, rt->right) && IsMirror(lft->right, rt->left);
    }
};
