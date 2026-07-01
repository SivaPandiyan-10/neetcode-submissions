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
    int diameter=0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        diameterOfBin(root);
        return diameter;
    }
    int diameterOfBin(TreeNode* root)
    {
        if(root == NULL) return 0;
        int left=diameterOfBin(root->left);
        int right=diameterOfBin(root->right);
        diameter=max(diameter,(left+right));
        return 1+max(left,right);
    }
};
