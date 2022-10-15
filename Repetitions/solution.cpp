void traversal (TreeNode* root, int targetSum, int sum, bool &flag) {
	// return if flag is true or root is null
	if (root == nullptr || flag) {
		return;
	}
	// add the value of nodes
	sum += root->val;
	
	// if its leaf node and sum is equals target then true flag and return
	if(root->left == nullptr &&  root->right == nullptr && targetSum == sum) {
		flag = true;
		return;
	}
	
	// traversal to left 
	traversal (root->left,targetSum, sum, flag);
	// traversal to right 
	traversal (root->right,targetSum, sum, flag);
}

bool hasPathSum(TreeNode* root, int &targetSum) {
	// reference variable to store  the result
	bool flag = false;
	// call the traversal function 
	traversal (root, targetSum, 0, flag);
	// return the result 
	return flag;
}
