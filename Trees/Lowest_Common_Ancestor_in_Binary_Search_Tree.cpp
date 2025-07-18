class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if (!root || !p || !q) {
            return nullptr;
        }
        if (max(p->val, q->val) < root->val) {
            return lowestCommonAncestor(root->left, p, q);
            
        } else if (min(p->val, q->val) > root->val) {
            return lowestCommonAncestor(root->right, p, q);
        } else {
            return root;
        }

    }
};
