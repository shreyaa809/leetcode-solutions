/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void findParent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent)
    {
        if (root==NULL)
        return;
        if (root->left)
        parent[root->left]=root;
        findParent(root->left,parent);
        if (root->right)
        parent[root->right]=root;
        findParent(root->right,parent);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        
        unordered_map<TreeNode*,TreeNode*>parent;
        findParent(root,parent);
        queue<TreeNode*>q;
        q.push(target);
        int c=0;
        vector<int>ans;
        if (root==NULL)
        return ans;
        map<TreeNode*, bool>vis;
        
        while (!q.empty())
        {
            int s=q.size();
            if (c==k)
               break;
            for (int i=0;i<s;i++)
            {
               TreeNode* node=q.front();
               
               
               q.pop();
               vis[node]=true;
               if (node->left&&!vis[node->left])
               q.push(node->left);
               if (node->right&&!vis[node->right])
               q.push(node->right);
               if (parent[node]&&!vis[parent[node]])
                q.push(parent[node]);
              
               
               
            }
            c++;
        }
        while (!q.empty())
        {
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};