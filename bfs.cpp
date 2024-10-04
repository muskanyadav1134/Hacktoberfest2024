class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0};    // Fixed size array 'V'
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        vector<int> bfs;     // Corrected the declaration here
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for (auto it : adj[node]) {
                if (!vis[it]) {     // Correct condition to check visited nodes
                    vis[it] = 1;    // Mark as visited
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};
