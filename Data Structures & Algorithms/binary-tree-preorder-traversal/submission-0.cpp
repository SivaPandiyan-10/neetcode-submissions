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
private:
    vector<int> l_vTemp;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return l_vTemp;
        l_vTemp.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return l_vTemp;
    }
};