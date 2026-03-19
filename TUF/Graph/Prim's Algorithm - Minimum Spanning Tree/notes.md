# 🌳 Prim’s Algorithm

🔗 Problem: Minimum Spanning Tree (MST)

---

## 🧠 Pattern
Greedy + Graph + Min Heap (Priority Queue)

---

## 💡 Key Idea
- Always pick the **minimum weight edge**
- Expand MST one node at a time
- Avoid cycles using `visited[]`

👉 Core thinking:  
"Pick the smallest edge that connects a new node to the MST"

---

## ⚙️ Algorithm
1. Start from any node (usually 0)
2. Push `{weight, node}` into min heap
3. Maintain `visited[]` array
4. While heap not empty:
   - Pop minimum weight edge
   - If node already visited → skip
   - Else:
     - Mark visited
     - Add weight to MST
     - Push all adjacent edges

---

## ⚡ Transition Logic
- Always pick smallest edge from priority queue

- Condition:
```cpp
if(vis[node]) continue;
```

---

## ⏱ Complexity
Time: O(E log V)  
Space: O(V + E)

---

## 🔥 When to Use
- Need **Minimum Spanning Tree**
- Graph is **connected & weighted**
- Works well for **dense graphs**

---

## ⚠️ When NOT to Use
- Graph is disconnected → gives MST of one component
- Need shortest path → use Dijkstra
- Need all-pairs shortest path → use Floyd Warshall

---

## 🚨 Edge Case
- Disconnected graph → multiple components

👉 Fix:
```cpp
for(int i = 0; i < V; i++) {
    if(!vis[i]) {
        pq.push({0, i});
    }
}
```

---

## 🧠 Key Insight (VERY IMPORTANT)
- Priority queue may contain **duplicate nodes**
- Only first valid (minimum) one is used

👉 That’s why:
```cpp
if(vis[node]) continue;
```
must come **before adding weight**

---

## ❌ Mistakes
- Adding weight before visited check ❌  
- Not using min heap (using max heap by mistake)  
- Forgetting visited array → cycles  
- Incorrect adjacency representation  

---

## 🔁 Revision
- Day 3: ⬜  
- Day 7: ⬜  
- Day 15: ⬜  

---

## 🧩 Can I explain this without code?
YES / NO
