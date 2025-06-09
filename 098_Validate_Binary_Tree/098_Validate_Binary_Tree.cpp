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
void inOrderTrav(TreeNode* root, vector<int> &v)
    {
        if(root==NULL) {return;}
        inOrderTrav(root->left,v);
        v.push_back(root->val);
        inOrderTrav(root->right,v);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>vec;
        inOrderTrav(root,vec);
        for(int i = 1; i<vec.size();++i) {
            if(vec[i]<=vec[i-1]) {return false;}
        }
        return true;
        
    }
};
