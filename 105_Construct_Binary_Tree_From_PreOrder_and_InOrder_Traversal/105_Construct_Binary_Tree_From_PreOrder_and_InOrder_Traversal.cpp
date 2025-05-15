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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int rootId = 0;
        return build(preorder, inorder, rootId, 0, inorder.size()-1);
        
    }
    TreeNode* build(vector<int>& PO, vector<int>& IO, int& rootId, int lft, int rt) {
        if (lft>rt) { return NULL;}
        int pvt = lft;
        while(IO[pvt] != PO[rootId]) {pvt++;}

        rootId++;
        TreeNode* newNode = new TreeNode(IO[pvt]);
        newNode->left  = build(PO, IO, rootId,lft,pvt-1);
        newNode->right = build(PO, IO, rootId, pvt+1,rt);
        return newNode;

    }
};
