/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


void inv(struct TreeNode* root){
    
    struct TreeNode *tmp = root->right;
    root->right = root->left;
    root->left = tmp;

    if(root->right != NULL) inv(root->right);
    if(root->left != NULL) inv(root->left);
}
struct TreeNode* invertTree(struct TreeNode* root){
    if(root!= NULL) inv(root);
    return root;
}