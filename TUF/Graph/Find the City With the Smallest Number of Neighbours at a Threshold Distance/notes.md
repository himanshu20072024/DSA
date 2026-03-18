# Find the City With the Smallest Number of Neighbors

🔗 Problem: Leetcode 1334

---

## 🧠 Pattern
Floyd Warshall (All-Pairs Shortest Path)

---

## 💡 Key Idea
- Need shortest distance between **every pair of cities**
- Then count how many cities are reachable within threshold

👉 So:
1. Compute all-pairs shortest paths
2. Count reachable cities for each node
3. Choose city with minimum count

---

## ⚙️ Approach

### Step 1: Initialize matrix
- dist[i][j] = INF
- dist[i][i] = 0

### Step 2: Fill edges
- Since graph is undirected:
  dist[u][v] = wt  
  dist[v][u] = wt  

---

### Step 3: Apply Floyd Warshall
- Try every node as intermediate

Transition:
dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

---

### Step 4: Count reachable cities
- For each city i:
  - count nodes j where dist[i][j] ≤ threshold

---

### Step 5: Select answer
- Choose city with **minimum reachable count**
- If tie → choose **largest index**

---

## ⚡ Key Insight
- Floyd Warshall gives all-pairs distances in one go
- Avoid running Dijkstra n times

---

## ⏱ Complexity
Time: O(n^3)  
Space: O(n^2)

---

## 🔥 Why Floyd Warshall?
- n is small (~100)
- Need shortest path from every node

👉 Running Dijkstra n times = O(n * E log V) (more complex)

---

## ❌ Mistakes
- Forgot to check INT_MAX before adding
- Didn’t handle tie case correctly
- Count included self node (optional but fine)

--  

## ⚠️ Edge Case
- dist[i][i] = 0 → always counted
- But since all cities have it → comparison unaffected

---

## 🔁 Revision
- Day 3: ⬜
- Day 7: ⬜
- Day 15: ⬜

---

## 🧩 Can I solve without code?
YES / NO