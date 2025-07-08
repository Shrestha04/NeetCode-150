class Solution {
public:

    void dfs(const vector<vector<int>>& adj, vector<bool>& visit, int i){
        visit[i] = true;
        for(int n:adj[i]){
            if(!visit[n]){
                dfs(adj,visit,n);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> visit(n, false);

        for(const auto& edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        int ans = 0;

        for(int i = 0; i < n; i++){
            if(!visit[i]){
                dfs(adj,visit,i);
                ans++;
            }
        }
        return ans;
    }
};
