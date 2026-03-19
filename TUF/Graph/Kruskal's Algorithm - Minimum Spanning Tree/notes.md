# Kruskal’s Algorithm (Minimum Spanning Tree)

---

## 🔗 Problem
Find the **Minimum Spanning Tree (MST)** of a weighted, undirected graph.

---

## 🧠 Pattern
Greedy + Disjoint Set Union (DSU)

---

## 💡 Key Idea
- Always pick the **smallest weight edge**
- Only add edge if it **does NOT form a cycle**

👉 Cycle detection is done using **DSU**

---

## ⚙️ Approach

### Step 1: Convert graph to edge list
- Store edges as:
  (weight, (u, v))

---

### Step 2: Sort edges
- Sort all edges in **ascending order of weight**

---

### Step 3: Initialize DSU
- Each node is its own parent initially

---

### Step 4: Process edges
For each edge:
1. Find ultimate parent of u and v
2. If different → add edge to MST
3. Union the components

---

### Step 5: Return MST weight
- Sum of all selected edge weights

---

## 🔁 Transition Logic

If:
find(u) ≠ find(v)

Then:
- Add edge weight
- union(u, v)

---

## ⚡ Key Insight
- DSU prevents cycles efficiently
- Greedy ensures minimum cost

---

## ⏱ Complexity
Time: O(E log E) + O(E α(N)) ≈ O(E log E)  
Space: O(N)

---

## 🔥 Why DSU?
- Fast cycle detection
- Nearly constant time operations

---

## ❌ Common Mistakes

- ❌ Forgetting to sort edges
- ❌ Wrong DSU implementation
- ❌ Using findParent[u] instead of findParent(u)
- ❌ Not handling duplicate edges (important in adjacency list)

---

## ⚠️ Edge Case

- Graph may contain duplicate edges (u→v and v→u)
👉 Fix:
Only take edge if:
u < v

---

## 🧩 Code (Based on Your Implementation)

```cpp
class DisjointSet {
    vector<int> parent, rank;
public:
    DisjointSet(int n) {
        rank.resize(n+1, 0);
        parent.resize(n+1);

        for(int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUltimateParent(int node) {
        if(parent[node] == node) return node;
        return parent[node] = findUltimateParent(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);

        if(ulp_u == ulp_v) return;

        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};

class Solution {
public:
    int spanningTrees(int V, vector<vector<int>> adj[]) {
        DisjointSet ds(V);
        vector<pair<int, pair<int, int>>> edges;

        for(int i = 0; i < V; i++) {
            for(auto it : adj[i]) {
                int adjNode = it[0];
                int wt = it[1];

                if(i < adjNode) {
                    edges.push_back({wt, {i, adjNode}});
                }
            }
        }

        sort(edges.begin(), edges.end());

        int mstWt = 0;

        for(auto it : edges) {
            int weight = it.first;
            int u = it.second.first;
            int v = it.second.second;

            if(ds.findUltimateParent(u) != ds.findUltimateParent(v)) {
                mstWt += weight;
                ds.unionByRank(u, v);
            }
        }

        return mstWt;
    }
};