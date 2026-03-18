// Given a directed graph with weighted edges, your task is to find the shortest distances between every pair of vertices.

// The graph is represented using an adjacency matrix matrix[][], where:

// matrix[i][j] represents the weight of the edge from vertex i to vertex j.

// If there is no direct edge between i and j, then matrix[i][j] = -1.

// You need to modify the matrix in-place such that:

// Each cell matrix[i][j] contains the shortest distance from vertex i to vertex j.

// If there is still no possible path between i and j, keep it as -1.


class Solution {
    public:
        void shortest_distance(vector<vector<int>>& matrix) {
            int n = matrix.size();

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    if(matrix[i][j] == -1) {
                        matrix[i][j] = INT_MAX;
                    }
                    if(i == j) matrix[i][j] = 0;
                }
            }
            for(int k = 0; k < n; k++) {
                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < n; j++) {
                        matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
                    }
                }
            }

            // if graph contains negative cycle then 
            for(int i = 0; i < n; i++) {
                if(matrix[i][i] < 0) {
                    // yes matrix has negative cycles because to reach from node to node itself it is taking negative
                }
            }

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    if(matrix[i][j] == INT_MAX) {
                        matrix[i][j] = -1;
                    }
                }
            }
        }
};