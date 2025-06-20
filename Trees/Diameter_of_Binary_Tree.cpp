class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if( root == nullptr){
            return 0;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int diameter = leftHeight + rightHeight;

        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int subtree = max(left, right);

        return max(diameter, subtree);
    }

    int height(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(height(root->left), height(root->right));   
    }
};
