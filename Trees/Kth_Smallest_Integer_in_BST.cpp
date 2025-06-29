class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        dfs(root,arr);
        return arr[k-1];
    }

    void dfs(TreeNode* root, vector<int>& arr){
        if(!root) return;
        dfs(root->left,arr);
        arr.push_back(root->val);
        dfs(root->right,arr);
    }
};
