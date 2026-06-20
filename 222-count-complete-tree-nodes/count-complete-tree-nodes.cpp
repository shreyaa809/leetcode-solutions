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
    int getLeft(TreeNode* root)
    {
        int lh=0;
        if (root==NULL)
        return lh;
        while (root)
        {
        lh++;
        root=root->left;
        }
        return lh;
    }
    int getRight(TreeNode* root)
    {
       int rh=0;
        if (root==NULL)
        return rh;
        while (root)
        {
        rh++;
        root=root->right;
        }
        return rh;
    }
    int countNodes(TreeNode* root) 
    {
        if (root==NULL)
        return 0;
        int lh=0,rh=0;
        lh=getLeft(root);
        rh=getRight(root);
        if (lh==rh)
        return (pow(2,lh)-1);
        return (countNodes(root->left)+countNodes(root->right)+1);
    }
};