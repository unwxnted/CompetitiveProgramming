   int sum = 0;
   int max = 0;

    void dfs(TreeNode* head, int d){
        if(head==NULL) return;
        if(head->left==NULL && head->right==NULL && d == max){
            sum+=head->val;
        }
        dfs(head->left, d+1);
        dfs(head->right, d+1);
    }

    vector<int> l;
    void checkNodes(TreeNode* head, int d){
        if(head==NULL) return;
        if(head->left==NULL && head->right==NULL){
            l.push_back(d);
        }
        checkNodes(head->left, d+1);
        checkNodes(head->right, d+1);
    }

    int deepestLeavesSum(TreeNode* root) {
        checkNodes(root, 0);
        sort(l.begin(), l.end());
        max = l[l.size()-1];
        dfs(root, 0);
        return sum;
    }