# Floyd Warshall Algorithm

🔗 Problem: All Pairs Shortest Path (Adjacency Matrix)

---

## 🧠 Pattern
All-Pairs Shortest Path (Dynamic Programming on Graph)

---

## 💡 Key Idea
- Try every node as an **intermediate node**
- Check if going through that node gives shorter path

👉 Core thinking:
"Can I go from i → j via k in a shorter way?"

---

## ⚙️ Algorithm
1. Convert -1 → INF (no edge case)
2. Set diagonal = 0 (distance to itself)
3. Run 3 loops:
   - for k (intermediate)
   - for i (source)
   - for j (destination)

4. Transition:
   dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

5. Convert INF back to -1

---

## ⚡ Transition Formula
dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

---

## ⏱ Complexity
Time: O(n^3)  
Space: O(1) (in-place)

---

## 🔥 When to Use
- Need shortest path between **all pairs**
- Graph given as **matrix**
- n is small (≤ 200–300)

---

## ⚠️ When NOT to Use
- Large graphs → too slow
- Single source shortest path → use Dijkstra/Bellman-Ford

---

## 🚨 Negative Cycle Detection
- If dist[i][i] < 0 → negative cycle exists

👉 Meaning:
You can reach same node with negative cost → cycle present

---

## 🧠 Key Insight (VERY IMPORTANT)
- Unlike Dijkstra → considers all pairs
- Unlike Bellman-Ford → works on matrix
- Uses **DP-like thinking**

---

## ❌ Mistakes
- Forgot to convert -1 → INF
- Overflow when doing dist[i][k] + dist[k][j]
- Forgot diagonal = 0
- Didn’t convert INF back to -1

---

## 🔁 Revision
- Day 3: ⬜
- Day 7: ⬜
- Day 15: ⬜

---

## 🧩 Can I explain this without code?
YES / NO
