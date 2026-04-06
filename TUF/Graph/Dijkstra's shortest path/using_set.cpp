vector<int> dijkstra(vector<vector<int>> &edge, int vertices, int edges, int source)
{
    // solving via set
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

    // creating a set
    set<pair<int, int>> st;
    dist[source] = 0;
    st.insert({dist[source], source});

    // iterating over set
    while(!st.empty()) {
        auto it = st.begin();
        int node = it->second;
        int dis = it->first;
        st.erase(it);

        for(auto it1: adj[node]) {
            int adjNode = it1.second;
            int adjWt = it1.first;
            if(dis + adjWt < dist[adjNode]) {
                dist[adjNode] = dis + adjWt;
                st.insert({dist[adjNode], adjNode});
            }
        }
    }

    return dist;

}