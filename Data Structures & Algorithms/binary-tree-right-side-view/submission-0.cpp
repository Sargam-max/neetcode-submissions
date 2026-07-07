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

void dfs(TreeNode*Noode,int level,vector<int>&res){
    if(Noode==nullptr){
        return;
    }

    if(level==res.size()){
        res.push_back(Noode->val);
    }
    dfs(Noode->right,level+1,res);
    dfs(Noode->left,level+1,res);

}
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;

        dfs(root,0,res);

        return res;


    }
};
