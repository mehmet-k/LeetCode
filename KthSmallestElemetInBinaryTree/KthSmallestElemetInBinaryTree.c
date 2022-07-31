/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int min;
void kth(struct TreeNode* root){
    if(root->val < min ) min = root->val;
    if(root->right != NULL)  kth(root->right);
    if(root->left!=NULL) kth(root->left);
}

void makeMax(struct TreeNode* root,int val){
    if(root->val == val) root->val = 999;
    else{
        if(root->right != NULL)  makeMax(root->right,min);
        if(root->left!=NULL) makeMax(root->left,min);
    }
}
int kthSmallest(struct TreeNode* root, int k){
    int i=0;
    while(i<k){
        min = 999;
        kth(root);
        makeMax(root,min);
        i++;
    }
    return min;
}
