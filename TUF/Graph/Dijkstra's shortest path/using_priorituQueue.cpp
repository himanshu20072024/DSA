vector<int> dijkstra(vector<vector<int>> &edge, int vertices, int edges, int source)
{
    // solving via priority queue 
    // create adj list
    vector<vector<pair<int, int>>> adj(vertices);

    for(auto it: edge) {
        int from = it[0];
        int to = it[1];
        int wt = it[2];
        adj[from].push_back({wt, to});
        adj[to].push_back({wt, from});
    }

    // creating list of shortest path
    vector<int> dist(vertices, INT_MAX);

    // creating a priority queue
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[source] = 0;
    pq.push({dist[source], source});

    // iterating over pq
    while(!pq.empty()) {
        int node = pq.top().second;
        int dis = pq.top().first;
        pq.pop();

        for(auto it: adj[node]) {
            int adjNode = it.second;
            int adjWt = it.first;
            if(dis + adjWt < dist[adjNode]) {
                dist[adjNode] = dis + adjWt;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }

    return dist;

}