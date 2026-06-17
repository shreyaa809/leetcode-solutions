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
    vector<vector<int>> zigzag(TreeNode* root)
    {
        vector<vector<int>> ans;
        if (root==NULL)
        return ans;
        queue<TreeNode*>st;
        st.push(root);
        int c=0;
        while(!st.empty())
        {
            int s=st.size();
            vector<int>v;
            c++;
            for (int i=1;i<=s;i++)
            {
                TreeNode* node=st.front();
                int t=node->val;
                st.pop();
                if (node->left!=NULL)
                st.push(node->left);
                if (node->right!=NULL)
                st.push(node->right);
    
                v.push_back(t);  
            }
            if (c%2==0)
            reverse(v.begin(),v.end());
            ans.push_back(v);
        }
        return ans;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        return zigzag(root);
    }
};