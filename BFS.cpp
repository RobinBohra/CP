class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V+1,0);
        vector<int> ans;
        queue<int> q;
        int src = 0;
        q.push(src);
        visited[src]++;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            ans.push_back(u);
            for(auto x : adj[u]){
                if(visited[x] == 0){
                    q.push(x);
                    visited[x]++;
                }
            }
        }
        return ans;
    }
};