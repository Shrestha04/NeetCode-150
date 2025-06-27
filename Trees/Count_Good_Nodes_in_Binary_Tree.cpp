class Solution {
public:
    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }

    int dfs(TreeNode* node, int maxVal){
        if(!node) return 0;

        int res = (node->val>=maxVal) ? 1: 0;

        maxVal = max(maxVal, node->val);
        res+=dfs(node->left,maxVal);
        res+=dfs(node->right,maxVal);
        return res;
    }
};
