# 🍫 Cherry Pickup II (2 Robots) — Notes

## 🧠 Core Intuition

* 2 robots start at:

  * Alice → (0,0)
  * Bob → (0,m-1)
* Both move **row by row (top → bottom)**
* At each step:

  * col1 → (col1-1, col1, col1+1)
  * col2 → (col2-1, col2, col2+1)
* Total **9 transitions**

---

## 🔑 State Definition

```
f(row, col1, col2)
```

* row → current row
* col1 → Alice column
* col2 → Bob column

---

## ⚡ Transition

```
(row, col1, col2)
   ↓
(row+1, col1 + d1, col2 + d2)
```

* d1, d2 ∈ {-1, 0, +1}

---

## 🧾 Value Collection Rule

```
if(col1 == col2)
    take once
else
    take both
```

---

## 🚧 Base Case

```
row == n-1
```

---

## ❌ Invalid State

```
col1 < 0 || col1 >= m || col2 < 0 || col2 >= m → return -∞
```

---

## 🪜 Approaches

### 1. Recursion

* Time: O(9^n) ❌

---

### 2. Memoization (3D DP)

```
dp[row][col1][col2]
```

* Time: O(n * m * m * 9)
* Space: O(n * m * m)

---

### 3. Tabulation

* Fill from:

```
row = n-1 → 0
```

* Base case → last row
* Answer → `dp[0][0][m-1]`

---

### 4. Space Optimization

```
front[m][m] → next row
curr[m][m] → current row
```

* Space: O(m²) ✅

---

# ⚠️ YOUR MISTAKES (IMPORTANT)

## ❌ 1. Wrong boundary condition

```
&& instead of ||
```

---

## ❌ 2. Boundary check AFTER accessing grid

→ caused potential crash

---

## ❌ 3. maxi = 0

→ wrong when all paths negative

✅ Fix:

```
maxi = -1e8
```

---

## ❌ 4. Variable collision

```
i used for row + movement
```

✅ Fix:

```
row, d1, d2
```

---

## ❌ 5. Infinite loop

```
for(j = -1; j <= 1; j--)
```

---

## ❌ 6. Wrong indexing

```
grid[i][col1]   ❌
grid[row][col1] ✅
```

---

## ❌ 7. Wrong transition logic

```
k+1 < n   ❌
```

👉 Row always:

```
row + 1
```

---

## ❌ 8. Wrong column update

```
col2 + k   ❌
col2 + j   ✅
```

---

## ❌ 9. Mixing row + movement logic

👉 Golden rule:

```
row always increases by 1
only columns move
```

---

## 🔥 Key Pattern Recognition

This is:

> **Multi-agent Grid DP (3D → 2D optimization)**

Whenever you see:

* 2 persons moving in grid
* Same time step
* Shared resource (like chocolates)

👉 Think:

```
(row, col1, col2)
```

---

## 🧠 Final Mental Model

* Fix row → move downward
* Try all 9 combinations
* Avoid out-of-bounds
* Maximize total collection

---

## 🏁 Final Complexity

| Approach   | Time          | Space   |
| ---------- | ------------- | ------- |
| Recursion  | Exponential ❌ | -       |
| Memo       | O(n·m²)       | O(n·m²) |
| Tabulation | O(n·m²)       | O(n·m²) |
| Optimized  | O(n·m²)       | O(m²) ✅ |

---

## 🚀 One-Line Summary

> "Two pointers moving down a grid → treat as 3D DP → optimize to 2D"

---

## ✅ Confidence Check

If stuck in future, ask:

* What are my **state variables?**
* Who is moving? (1 or 2 agents?)
* Can I combine them into one DP state?

---
