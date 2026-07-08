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

void inorder(TreeNode*N,vector<int>&v){

    if(N==nullptr){
        return;
    }

    inorder(N->left,v);
    v.push_back(N->val);
    inorder(N->right,v);

}
    int kthSmallest(TreeNode* root, int k) {
        vector<int>v;

        inorder(root,v);


        if(k>=1 && k<=v.size()){
            return v[k-1];
        }


        return -1;

    }
};
