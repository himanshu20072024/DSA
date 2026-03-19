# 1319. Number of Operations to Make Network Connected

🔗 Problem: Leetcode 1319

---

## 🧠 Pattern
Disjoint Set Union (DSU) + Extra Edges + Connected Components

---

## 💡 Key Idea (My Approach)
- If an edge connects nodes already in same component → it's an **extra edge**
- Extra edges can be reused to connect different components

👉 So:
1. Detect extra edges using DSU
2. Count number of connected components
3. Use extra edges to connect components

---

## ⚙️ Approach (My Code Logic)

### Step 1: Initialize DSU
- Each node is its own parent
- Maintain:
  - `parent[]` → stores parent
  - `size[]` → for union by size
  - `rank[]` → optional (not used here)

---

### Step 2: Traverse Connections

For each edge (u, v):

- If both nodes have same ultimate parent:
  → extra edge (cycle)

- Else:
  → union(u, v)

```cpp
if(ds.findUltimateParent(u) == ds.findUltimateParent(v)) {
    cntExtra++;
} else {
    ds.unionBySize(u, v);
}