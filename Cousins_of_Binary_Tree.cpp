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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root == NULL)
        {
            return false;
        }
        queue <pair<TreeNode*,int>> q;
        q.push({root,-1});
        int lev = 0,levx = -9,parx = -9,levy = -9,pary = -9;
        while(!q.empty())
        {          
            int k = q.size();
            lev++;
            while(k--)
            {
                TreeNode* f = q.front().first;
                int par = q.front().second;
                q.pop();
                if(f->val == x)
                {
                    levx = lev;
                    parx = par;
                }
                if(f->val == y)
                {
                    levy = lev;
                    pary = par;
                }
                if(f->left)
                {
                    q.push({f->left,f->val});
                }
                if(f->right)
                {
                    q.push({f->right,f->val});
                }
            }
        }
        if(levx == levy && parx != pary)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
