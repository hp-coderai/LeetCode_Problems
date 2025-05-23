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
    int sumNumbers(TreeNode* root) {
        if (!root) {
            return 0;
        }

        stack<pair<TreeNode*, int>> s;
        int ans = 0;
        s.push(pair(root,ans));

        while (!s.empty()) {
            TreeNode* node = s.top().first;
            int cur = s.top().second*10 + node->val;
            s.pop();

            if (!node->right && !node->left) {
                ans += cur;
            }

            if(node->left) {
                s.push(pair(node->left,cur));
            }
            if(node->right) {
                s.push(pair(node->right,cur));
            }

        }
        return ans;
    }
};
