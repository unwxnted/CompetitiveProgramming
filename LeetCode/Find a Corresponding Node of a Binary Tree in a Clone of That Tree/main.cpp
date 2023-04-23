TreeNode* one;

    void dfs(TreeNode* tree, TreeNode* target){
        if(tree==NULL) return;
        if(tree->val == target->val) one = tree;
        if(tree->left!=NULL) dfs(tree->left, target);
        if(tree->right!=NULL) dfs(tree->right, target);
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        dfs(cloned, target);
        return one;
    }