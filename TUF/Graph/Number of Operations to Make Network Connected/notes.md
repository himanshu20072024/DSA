# 1319. Number of Operations to Make Network Connected

🔗 Problem: Leetcode 1319

---

## 🧠 Pattern
Disjoint Set Union (DSU) + Extra Edges + Connected Components

---

## 💡 Key Idea (My Approach)
- If two nodes are already connected → edge is **extra (redundant)**
- Extra edges can be reused to connect different components

👉 So:
1. Detect extra edges using DSU
2. Count number of components
3. Use extra edges to connect components

---

## ⚙️ Approach (My Logic)

### Step 1: Initialize DSU
- Each node is its own parent
- Maintain size (or rank) for optimization

---

### Step 2: Traverse all connections

For each edge (u, v):

- If both nodes already belong to same component:
  → **extraEdges++**

- Else:
  → union(u, v)

```cpp
if(find(u) == find(v)) extraEdges++;
else union(u, v);