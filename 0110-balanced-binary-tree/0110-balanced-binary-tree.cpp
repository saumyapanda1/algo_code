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
    bool isBalanced(TreeNode* root) {
        
        return isB(root);
    }

    bool isB(TreeNode* p)
    {
        int lh=0, rh=0; 

        if(!p)
            return true; 
        
        lh = th(p->left);
        rh = th(p->right);

        cout << abs(lh-rh) << endl; 
        if(abs(lh - rh) > 1)
            return false; 
        
        return isB(p->left) && isB(p->right);
    }

    int th(TreeNode* root)  {
        if(root == NULL)
            return 0;
        
        return max(th(root->left), th(root->right)) + 1; 
    }

};