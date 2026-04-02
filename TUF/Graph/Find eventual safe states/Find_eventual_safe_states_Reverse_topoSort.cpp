class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        // using topo sorting technique
        // but here we need outDegree for each node because a node is terminal if its outdegree is 0 and all nodes pointing to that nodes 
        // are safe  nodes

        // how to find outDegree then its pretty simple its the graph[0].size() for outdegree of node '0'
        // we will reverse each arrow means from "from to to" to "to to from"

        // lets do that !!!

        int n = graph.size();

        vector<int> inDegree(n); // this will be the outdegree for the previous or question graph !!

        vector<vector<int>> revAdj(n); // creating out new reversed graph 
        // created !!
        for(int i = 0; i < n; i++) {
            for(auto it: graph[i]) {
                revAdj[it].push_back(i);
            }
        }

        for(int i = 0; i < n; i++) {
            for(auto it: revAdj[i]) {
                inDegree[it]++;
            }
        }

        // creating the queue for topo sorting methid 

        queue<int> q;

        // pushing all nodes with inDegree 0 means for original graph outDegree 0
        for(int i = 0; i < n; i++) {
            if(inDegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> safeNodes;
        while(!q.empty()) {
            int node = q.front();
            q.pop();

            // as this has 0 outDegree !! 
            safeNodes.push_back(node);

            for(auto it: revAdj[node]) {
                inDegree[it]--;
                if(inDegree[it] == 0) {
                    q.push(it);
                }
            }

        }

        sort(safeNodes.begin(), safeNodes.end());
        return safeNodes;

        // ig thats it 


    }
};