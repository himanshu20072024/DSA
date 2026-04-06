# 🧠 Shortest Path in DAG (Using Topological Sort)

---

## ✅ Core Idea

In a **Directed Acyclic Graph (DAG)**, we can find shortest paths using:

1. Topological Sort
2. Relax edges in topo order

---

## ⚙️ Algorithm Steps

1. Build adjacency list  
2. Perform DFS to get Topological Sort (using stack)  
3. Initialize distance array:
   - dist[source] = 0
   - others = ∞ (1e9)
4. Process nodes in topo order:
   - Relax all outgoing edges

---

## 💡 Why Topo Sort Works

Topo sort ensures:
If there is an edge u → v,
then u is processed before v


👉 So when we process `v`, the shortest distance to `u` is already known.

---

## 🚨 Mistakes I Made (IMPORTANT)

---

### ❌ Mistake 1: Wrong DFS Traversal

```cpp
for(auto it: adj[node]) {
    if(!vis[node]) {
        dfs(it, vis, st, adj);
    }
}

🔥 Why this condition is REQUIRED
if(dist[node] != 1e9)
Only process nodes that are reachable from source

🧠 Intuition
dist[node] = 1e9 → node is NOT reached yet
You cannot relax edges from an unreachable node

| Component             | Role                      |
| --------------------- | ------------------------- |
| Topo Sort             | Ensures correct order     |
| dist[]                | Tracks shortest distance  |
| if(dist[node] != 1e9) | Ensures node is reachable |
