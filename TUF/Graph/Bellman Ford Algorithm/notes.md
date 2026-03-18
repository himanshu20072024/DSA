# Bellman-Ford Algorithm

🔗 Source: https://takeuforward.org/plus/dsa/problems/bellman-ford-algorithm?source=strivers-a2z-dsa-track

---

## 🧠 Pattern
Single Source Shortest Path (handles negative weights). It helps us to detect negative cycles we call a cycle negative if path weight is less than 0
If i did Vth iteration and still distance gets reduced i can say graph has negative cycles 

---

## 💡 Key Idea
- Relax all edges **V-1 times** sequentially 
- Why? → shortest path can have at most V-1 edges
- After V-1 relaxations → distances stabilize
- Edges can be in any order

---

## ⚡ Algorithm Steps
1. Initialize distance array:
   - dist[src] = 0
   - rest = INF

2. Repeat V-1 times:
   - For every edge (u → v, wt):
     if dist[u] + wt < dist[v]
        update dist[v]

3. Check for negative cycle:
   - Run one more iteration
   - If any distance updates → negative cycle exists

---

## 🚨 Negative Cycle Detection
- If distance still reduces after V-1 iterations
→ Graph has **negative weight cycle**

---

## 🔄 Comparison

Bellman-Ford vs Dijkstra:

- Bellman-Ford → handles negative weights
- Dijkstra → faster but no negative weights

## ⏱ Complexity
Time: O(V * E)  
Space: O(V)

---

## 🔥 When to Use
- Graph has **negative weights**
- Need shortest path from source

---

## ⚠️ When NOT to Use
- Large graphs (slow)
- When no negative weights → use Dijkstra

---

## 🧠 Key Insight (VERY IMPORTANT)
- Unlike Dijkstra, Bellman-Ford works even with negative edges
- It relaxes **edges globally**, not greedily

---

## ❌ Mistakes
- Forgot V-1 iterations
- Didn’t check negative cycle
- Used it when Dijkstra was sufficient

---

## 🔁 Revision
- Day 3: ⬜
- Day 7: ⬜
- Day 15: ⬜

---

## 🧩 Can I explain this without code?
YES / NO


