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

    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) {
            return false;
        }

        stack<pair<TreeNode*, int>> s;
        s.push(pair(root,0));
        int sum = 0;

        while (!s.empty()) {
            TreeNode* node = s.top().first;
            int currsum = s.top().second + node->val;

            s.pop();

            if(node->right == NULL && node->left == NULL && currsum == targetSum) {
                return true;
            }

            if (node->left != NULL) {
                s.push(pair(node->left, currsum));
            }

            if (node->right != NULL) {
                s.push(pair(node->right, currsum));
            }

        }
        return false;
    }
};
