# 🔥 Articulation Points (Cut Vertices) — Tarjan’s Algorithm

---

## 📌 Problem Statement

Given an **undirected graph**, find all **articulation points**.

> An articulation point is a node which, if removed, increases the number of connected components.

---

## 🧠 Key Idea

We use **DFS + Time of Insertion + Lowest Reachable Time**

### Definitions:

- `tin[node]` → Time when node is first visited
- `low[node]` → Earliest visited node reachable from that node

---

## ⚡ Core Conditions

### ✅ Case 1: Non-root node

if (low[child] >= tin[node])


👉 Means:
- Child cannot reach any ancestor of `node`
- So removing `node` disconnects child

---

### ✅ Case 2: Root node
if (child > 1)


👉 Root has more than one DFS branch  
👉 Removing root disconnects graph

---

## 🔁 DFS Flow

1. Mark node visited
2. Assign:
tin[node] = low[node] = timer++

3. Count children
4. Traverse neighbors:
- If not visited:
  - DFS call
  - Update:
    ```
    low[node] = min(low[node], low[child])
    ```
  - Check articulation condition
- If visited:
  ```
  low[node] = min(low[node], tin[neighbor])
  ```
5. Special root check

---

## ✅ Code (Your Implementation)

```cpp
class Solution {
private:
 int timer = 1;

 void dfs(int node, int parent, vector<int>& vis, vector<int>& mark,
          vector<int> adj[], vector<int>& low, vector<int>& tin) {

     vis[node] = 1;
     tin[node] = low[node] = timer++;

     int child = 0;

     for(auto it: adj[node]) {

         if(!vis[it]) {
             dfs(it, node, vis, mark, adj, low, tin);

             low[node] = min(low[node], low[it]);

             // Articulation condition (non-root)
             if(low[it] >= tin[node] && parent != -1) {
                 mark[node] = 1;
             }

             child++;
         }
         else {
             low[node] = min(low[node], tin[it]);
         }
     }

     // Root node condition
     if(parent == -1 && child > 1) {
         mark[node] = 1;
     }
 }

public:
 vector<int> articulationPoints(int n, vector<int> adj[]) {

     vector<int> vis(n, 0);
     vector<int> mark(n, 0);
     vector<int> low(n), tin(n);

     for(int i = 0; i < n; i++) {
         if(!vis[i]) {
             dfs(i, -1, vis, mark, adj, low, tin);
         }
     }

     vector<int> ans;

     for(int i = 0; i < n; i++) {
         if(mark[i] == 1) {
             ans.push_back(i);
         }
     }

     if(ans.size() == 0) return {-1};

     return ans;
 }
};

❌ Common Mistakes (VERY IMPORTANT)
1. ❌ Using > instead of >=
if(low[child] > tin[node]) ❌

✔️ Correct:

if(low[child] >= tin[node])
2. ❌ Forgetting root case
if(parent == -1 && child > 1)

👉 Very important, otherwise root won't be marked

3. ❌ Not counting children
int child = 0;
child++;

👉 Needed only for root logic

4. ❌ Using low instead of tin in back edge
low[node] = min(low[node], low[it]) ❌

✔️ Correct:

low[node] = min(low[node], tin[it])
5. ❌ Forgetting parent check (in some versions)
if(it == parent) continue;

👉 Needed in some implementations (not strictly required here due to logic)

🧠 Intuition
tin[node] → when node is visited
low[node] → how far back we can go

🔥 Key Thinking:

If a child cannot go above me → I am critical


| Feature       | Bridge                   | Articulation Point        |
| ------------- | ------------------------ | ------------------------- |
| What removed? | Edge                     | Node                      |
| Condition     | `low[child] > tin[node]` | `low[child] >= tin[node]` |

⏱️ Complexity
Time: O(V + E)
Space: O(V + E)⏱️ Complexity
