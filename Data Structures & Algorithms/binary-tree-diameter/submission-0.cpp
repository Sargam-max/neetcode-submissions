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

int height(TreeNode*N,int&diameter){
    if(!N){
        return 0;
    }
    int lh=height(N->left,diameter);
    int rh=height(N->right,diameter);
    diameter=max(diameter,rh+lh);
    return 1+max(rh,lh);


}




    int diameterOfBinaryTree(TreeNode* root) {

        int diameter=0;
        height(root,diameter);

        return diameter;
    }
};
