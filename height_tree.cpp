// the following code gives the height of a binary tree
int height(node*root){
  if(root==NULL){
    return 0;
  }
  int ls = height(root->left);
  int rs = height(root->right);
  return max(ls,rs) + 1;
}
