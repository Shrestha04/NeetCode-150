class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        int leftH = checkH(root->left);
        int rightH = checkH(root->right);

        int ans = abs(leftH - rightH);

        if(ans > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);   
    }

    int checkH(TreeNode* root){

        if(root == nullptr){
            return 0; 
        }

        int leftv = checkH(root->left);
        int rightv = checkH(root->right);

        return max(leftv,rightv) + 1;
    }
};
