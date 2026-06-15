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
    int maxSumHeight(TreeNode* root,int& h)
    {
        if (root==NULL)
        return 0;
        int leftH=maxSumHeight(root->left,h);
        int rightH=maxSumHeight(root->right,h);
        h=max(leftH+rightH,h);
        return (max(leftH,rightH)+1);
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int h=0;
        int a=maxSumHeight(root,h);
        return h;
    }
};