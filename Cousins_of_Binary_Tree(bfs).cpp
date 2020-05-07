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
    vector<int> dfs(TreeNode* root,int par,int lev,int req)
    {
  
        if(root == NULL)
        {
            vector<int> temp;
            return temp;
        }
            //  cout<<root->val<<" "<<req<<endl;
        if(root->val == req)
        {
            vector <int> temp;
            temp.push_back(lev);
            temp.push_back(par);
            return temp;
        }
        else
        {
            vector<int> lans = dfs(root->left,root->val,lev+1,req);
            vector<int> rans = dfs(root->right,root->val,lev+1,req);
            if(lans.size() == 0)
            {
                return rans;
            }
            else
            {
                return lans;
            }  
        }
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root == NULL)
        {
            return false;
        }
        TreeNode* head = root;
        vector<int> xval = dfs(root,-1,0,x);
        vector<int> yval = dfs(root,-1,0,y);
        
        if(xval[0] == yval[0] && xval[1] != yval[1])
        {
            return true;
        }
        return false;
    }
};
