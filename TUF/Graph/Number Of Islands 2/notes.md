# Number of Islands II (DSU)

🔗 Source: https://takeuforward.org/plus/dsa/problems/number-of-islands-ii

---

## 🧠 Pattern
Dynamic Connectivity + Disjoint Set (Union-Find)

---

## 💡 Key Idea
- Grid initially filled with water (`0`)
- We convert positions into land (`1`) one by one

👉 After each operation:
> Find number of **connected components (islands)**

- Each new land → increases island count
- If it connects with existing land → islands merge (count decreases)

---

## ⚡ Algorithm Steps

1. Initialize:
   - `vis[n][m] = 0`
   - DSU of size `n*m`
   - `count = 0`

2. For each operation `(row, col)`:

   - If already land:
     - push current count
     - continue

   - Mark as land:
     - `vis[row][col] = 1`
     - `count++`

   - Check 4 directions:
     - If adjacent is land:
       - Find parents
       - If different:
         - Union them
         - `count--`

3. Store count after each operation

---

## 🔢 Node Mapping

Convert 2D → 1D:

⏱ Complexity

Time: O(k * α(n*m))

k = number of operations

α = inverse Ackermann (≈ constant)

Space: O(n*m)

🔥 Key Observations

Each land addition initially forms a new island

Merging reduces island count

DSU efficiently tracks components