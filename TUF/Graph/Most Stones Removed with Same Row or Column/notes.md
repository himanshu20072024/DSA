# 📌 Most Stones Removed with Same Row or Column (DSU)

---

## 🔹 Problem Summary

Given stones placed on a 2D grid, you can remove a stone if:
- There exists another stone in the **same row OR same column**

👉 Return the **maximum number of stones that can be removed**

---

## 🧠 Core Idea

👉 Treat this as a **graph problem using DSU**

- Each **row = node**
- Each **column = node**
- Each stone connects:
  
  row ↔ column

👉 So each stone forms a connection (edge)

---

## 🔥 Key Insight

If a group has `k` stones:

👉 You can remove **(k - 1)** stones

So:
Answer = Total Stones - Number of Connected Components


---

## 🔧 DSU Mapping Trick (IMPORTANT)

We cannot use same indices for rows & columns.

### ✅ Solution:
Shift column indices
nodeRow = row
nodeCol = col + maxRow + 1


👉 Now:
- Rows → 0 to maxRow
- Columns → maxRow+1 onwards

✔️ No collision

---

## ⚠️ Why unordered_map is used?

```cpp
unordered_map<int, int> stoneNodes;
❓ Problem:

DSU contains many unused nodes

✅ Solution:

Store only nodes that actually appear in stones
stoneNodes[nodeRow] = 1;
stoneNodes[nodeCol] = 1;
👉 This ensures:

We count only relevant nodes

Ignore unused DSU nodes
