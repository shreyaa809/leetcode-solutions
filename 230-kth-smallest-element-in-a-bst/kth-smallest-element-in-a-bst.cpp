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
    void findK(TreeNode* root,set<int>&s)
    {
        if (root==NULL)
        return;
        s.insert(root->val);
        findK(root->left,s);
        findK(root->right,s);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        set<int>s;
        findK(root,s);
        for (auto it:s)
        {
            k--;
            if (k==0)
            return it;
            
            
        }
        return -1;
    }
};