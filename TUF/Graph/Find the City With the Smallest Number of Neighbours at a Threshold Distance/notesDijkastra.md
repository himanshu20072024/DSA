# Find the City With the Smallest Number of Neighbors (Dijkstra)

🔗 Problem: Leetcode 1334

---

## 🧠 Pattern
Dijkstra (Single Source Shortest Path × n)

---

## 💡 Key Idea
- Need shortest distance from each city to all others
- Run Dijkstra from every node

👉 Steps:
1. Run Dijkstra for each city
2. Get shortest distances
3. Count nodes within threshold
4. Choose minimum (tie → largest index)

---

## ⚙️ Approach

### Step 1: Build Graph
- Adjacency list
- Undirected weighted graph

adj[u] → {v, wt}  
adj[v] → {u, wt}

---

### Step 2: Initialize Dijkstra
- dist[] = INF
- dist[src] = 0
- Min heap (priority queue)

---

### Step 3: Relaxation
if (d + wt < dist[adjNode])  
→ update dist  
→ push into pq

---

### Step 4: Optimization
Skip stale entries:

if (d > dist[node]) continue;

---

### Step 5: Count Reachable Cities
For each node j:

if (dist[j] ≤ threshold) → count++

---

### Step 6: Select Answer
- Minimum reachable cities
- Tie → largest index

if (cnt ≤ minReachable):  
    city = i

---

## ⚡ Key Insight
- Run shortest path n times instead of all-pairs
- Efficient for sparse graphs

---

## ⏱ Complexity
Time: O(V × E log V)  
Space: O(V + E)

---

## 🔥 Why Dijkstra?
- Better for sparse graphs
- Standard shortest path approach
- More scalable than Floyd-Warshall for large E

---

## ❌ Mistakes (from my first code)
- Variable shadowing (dist int vs vector)
- Forgot pq.pop()
- Didn’t push updated nodes
- Missing stale check
- Incorrect answer tracking

---

## ⚠️ Edge Case
- dist[i] = 0 → self counted
✔ Same for all → no issue

---

## 🔁 Revision
- Day 3: ⬜
- Day 7: ⬜
- Day 15: ⬜

---

## 🧩 Can I solve without code?
YES / NO
