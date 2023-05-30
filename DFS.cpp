class Solution {
  public:

    void dfs(int u, int V, int visited[], vector<int> adj[], vector<int>&ans)
    {

        ans.push_back(u);
        visited[u] = 1;

        for(auto it : adj[u])
        {
            if(!visited[it])
            {
                dfs(it, V, visited, adj, ans);
            }
        }
        return;
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int visited[V] = {0};
        vector<int> ans;
        dfs(0, V, visited, adj, ans);

        return ans;
    }
