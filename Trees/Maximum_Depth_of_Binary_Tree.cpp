class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int leftv = maxDepth(root->left);
        int rightv = maxDepth(root->right);
        int ans = max(leftv, rightv);

        return 1 + ans;
    }
};
