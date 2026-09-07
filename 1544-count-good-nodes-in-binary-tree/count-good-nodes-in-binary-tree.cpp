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
    void countGood(TreeNode* root,int maxi,int &ans)
    {
        if (root==NULL)
        return;
        
        maxi=max(maxi,root->val);
        if (root->val>=maxi)
        {
            ans++;
        }
        
         countGood(root->left,maxi,ans);
        countGood(root->right,maxi,ans);
    }
    int goodNodes(TreeNode* root) 
    {
        if (root==NULL)
        return 0;
        int ans=0;
         countGood(root,root->val,ans);
         return ans;
    }
};