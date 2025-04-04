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
    bool isValidBST(TreeNode* root) {
        return isBST(root, LONG_MIN, LONG_MAX);
    }

    bool isBST(TreeNode* hp, long min, long max)
    {
        if(hp == NULL)
            return true; 
        
        if(hp->val <= min || hp->val >= max)
            return false; 
        
        return isBST(hp->left, min, hp->val) && isBST(hp->right, hp->val, max);
    }
};