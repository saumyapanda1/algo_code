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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rv; 
        rightSide(root, rv);

        return rv; 
    }

void rightSide(TreeNode *hp, vector<int> &rv)
    {
        TreeNode *tp=NULL; 
        vector<TreeNode *> v; 
        int i=0, len=0; 

        if(hp == NULL)
            return; 
        
        v.push_back(hp);
        
        while(!v.empty())
        {
            rv.push_back(v.back()->val); 
            len = v.size(); 

            for(i=0; i<len; i++)
            {
                if(v[i]->left)
                    v.push_back(v[i]->left);
                if(v[i]->right)
                    v.push_back(v[i]->right);        
            }

            v.erase(v.begin(), v.begin()+len);
        }

        return; 
    }
};