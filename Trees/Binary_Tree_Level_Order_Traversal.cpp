class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> level;
            int size = q.size();

            for(int i = 0; i< size; i++){
                TreeNode* root = q.front();
                q.pop();

                if(root){
                    level.push_back(root->val);
                }
                if(root->left){
                    q.push(root->left);
                }

                if(root->right){
                    q.push(root->right);
                }
            }
            if(!level.empty()){
                ans.push_back(level);
            }
        }
        return ans;   
    }
};
