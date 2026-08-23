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
    
    int robber(TreeNode* root,unordered_map<TreeNode*,int>&dp)
    {
        if (root==NULL)
        return 0;
        //take
        if (dp.find(root)!=dp.end())
        return dp[root];
        int take = root->val;

        if (root->left)
        take += robber(root->left->left,dp) + robber(root->left->right,dp);

        if (root->right)
        take += robber(root->right->left,dp) + robber(root->right->right,dp);
        //not take
        int not_take=robber(root->left,dp)+robber(root->right,dp);
        return dp[root]=max(take,not_take);

    }
    int rob(TreeNode* root) 
    {
        unordered_map<TreeNode*,int>dp;
        return robber(root,dp);
    }
};