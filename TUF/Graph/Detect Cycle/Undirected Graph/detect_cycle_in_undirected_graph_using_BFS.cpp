class Solution {
    private :
        bool detect(int src, vector<int>& adj, int& vis) {
            vis[src] = 1;
            queue<pair<int, int>> q;
            q.push({src, -1});

            while(!q.empty()) {
                int node = q.front().first;
                int parent = q.front().second;

                for(auto adjacentNode : adj[node]) {
                    if(!vis[adjacentNode]) {
                        vct[adjacentNode] = 1;
                        q.push(adjacentNode, node);
                    } else if(parent != adjacentNode){
                        return true;
                    }
                }
            }
            return false;
        }
    public : 
        bool isCycle(int V, vector<int> adj[]) {
            int vis[V] = {0};

            for(int i = 0; i < V; i++) {
                if(!vis[V]) {
                    if(detect(i, adj, vis)) return true;
                }
            }
            return false;
        }
}

// time : O(N + 2E)  for rvery node we are traversing for adjacent nodes and it is 2E
// space : O(N + N) one for queue and one for visited array 