class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();
        vector<int> color(n, -1);

        for(int i = 0; i < n; i++) {

            if(color[i] == -1) {

                queue<int> q;
                color[i] = 0;
                q.push(i);

                while(!q.empty()) {

                    int node = q.front();
                    q.pop();

                    int clr = color[node];

                    for(auto it : graph[node]) {

                        if(color[it] == -1) {
                            color[it] = !clr;
                            q.push(it);
                        } else if(color[it] == clr) {
                            return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};