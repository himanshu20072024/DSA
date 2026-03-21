# 🔥 Critical Connections in a Network (Bridges) — Tarjan’s Algorithm

---

## 📌 Problem Statement

Given an undirected graph with `n` nodes and `connections`, find all **critical connections (bridges)**.

> A bridge is an edge which, if removed, increases the number of connected components.

---

## 🧠 Key Idea (Tarjan’s Algorithm)

We use **DFS + Time of Insertion + Lowest Reachable Time**

### Definitions:

- `tin[node]` → Time of insertion (when node is first visited)
- `low[node]` → Lowest time reachable from that node (including back edges)

---

## ⚡ Core Bridge Condition
if (low[child] > tin[parent])


👉 This means:
- Child cannot reach parent or any ancestor
- So edge `(parent → child)` is a **bridge**

---

## 🔁 DFS Flow

1. Mark node as visited
2. Assign:
tin[node] = low[node] = timer++

3. Traverse all neighbors:
- If neighbor == parent → ignore
- If not visited:
  - DFS call
  - Update:
    ```
    low[node] = min(low[node], low[child])
    ```
  - Check bridge condition
- If already visited:
  ```
  low[node] = min(low[node], tin[neighbor])
  ```

---

## ✅ Code (Final Clean Version)

```cpp
class Solution {
 int timer = 1;

 void dfs(int node, int parent, vector<int>& vis, vector<int>& tin,
          vector<int>& low, vector<vector<int>>& adj,
          vector<vector<int>>& bridges) {

     vis[node] = 1;
     tin[node] = low[node] = timer++;

     for (auto it : adj[node]) {

         if (it == parent) continue;

         if (!vis[it]) {
             dfs(it, node, vis, tin, low, adj, bridges);

             low[node] = min(low[node], low[it]);

             if (low[it] > tin[node]) {
                 bridges.push_back({node, it});
             }
         }
         else {
             low[node] = min(low[node], tin[it]);
         }
     }
 }

public:
 vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {

     vector<vector<int>> adj(n);

     for (auto &it : connections) {
         adj[it[0]].push_back(it[1]);
         adj[it[1]].push_back(it[0]);
     }

     vector<int> vis(n, 0), tin(n), low(n);
     vector<vector<int>> bridges;

     dfs(0, -1, vis, tin, low, adj, bridges);

     return bridges;
 }
};

❌ Common Mistakes (VERY IMPORTANT)
1. ❌ Iterating wrong adjacency
for(auto it : adj)   ❌

✔️ Use:

for(auto it : adj[node])
2. ❌ Wrong parent check
if(parent == node) ❌

✔️ Use:

if(it == parent)
3. ❌ Wrong bridge condition
if(low[it] < tin[node]) ❌

✔️ Correct:

if(low[it] > tin[node])
4. ❌ Using wrong variable names
Using min instead of low
Mixing low and tin

✔️ Always:

vector<int> tin, low;
5. ❌ Adjacency list not initialized
vector<vector<int>> adj; ❌

✔️ Use:

vector<vector<int>> adj(n);
6. ❌ Wrong push_back
bridges.push_back(node, it); ❌

✔️ Use:

bridges.push_back({node, it});
⏱️ Complexity
Time: O(V + E)
Space: O(V + E) + recursion stack
🎯 Interview Tips
Always mention:
“Using Tarjan’s Algorithm”
“Tracking tin and low arrays”

Remember:

Bridge exists when child cannot reach ancestor

🧩 Intuition in One Line

If a node cannot go back to its parent or above → edge is critical.