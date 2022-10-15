public TreeNode addOneRow(TreeNode root, int val, int depth) {
            if(depth == 1) return new TreeNode(val,root,null);
            addOneRow_helper(root,val,1,depth);
			return root;
        }
private void addOneRow_helper(TreeNode node, int val, int currDepth, int depth) {
            if(node == null || currDepth >= depth) return;
            if(currDepth + 1 == depth) {
                node.left = new TreeNode(val,node.left,null);
                node.right = new TreeNode(val,null,node.right);
                return;
            }
            else {
                addOneRow_helper(node.left,val,currDepth+1,depth);
                addOneRow_helper(node.right,val,currDepth+1,depth);
            }
        }
