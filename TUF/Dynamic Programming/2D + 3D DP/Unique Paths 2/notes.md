# 🧠 Unique Paths II (with Obstacles) — Quick Revision

## 🔑 Core Idea

* Move only **right or down**
* If obstacle → **0 paths**
* Else → **top + left**

---

## 🥉 1. Recursion (Brute Force)

### 💡 Thinking

* From `(i,j)` → go `(i-1,j)` + `(i,j-1)`

### ⚠️ Key Points

* If `grid[i][j] == 1` → return 0
* Base: `(0,0)` → return 1

### ⏱️ Complexity

* Time: **O(2^(m+n))**
* Space: **O(m+n)** (stack)

---

## 🥈 2. Memoization (Top-Down DP)

### 💡 Add

* `dp[i][j]` to store results

### ⚠️ Key Points

* Check `dp` before recursion
* Same recurrence

### ⏱️ Complexity

* Time: **O(m*n)**
* Space: **O(m*n) + recursion stack**

---

## 🥇 3. Tabulation (Bottom-Up DP)

### 💡 Transition

```
dp[i][j] = top + left
```

### ⚠️ Key Points

* If obstacle → `dp[i][j] = 0`
* Start cell:

  ```
  if(grid[0][0] == 1) return 0
  dp[0][0] = 1
  ```
* Traverse row-wise

### ⏱️ Complexity

* Time: **O(m*n)**
* Space: **O(m*n)**

---

## 🚀 4. Space Optimization (1D DP)

### 💡 Trick

* `prev[j]` → top
* `curr[j-1]` → left

### ⚠️ Key Points

* Always use **j for indexing**
* Obstacle → skip (0 already)

### ⏱️ Complexity

* Time: **O(m*n)**
* Space: **O(n)**

---

## 🧠 Pattern Lock (MOST IMPORTANT)

```
if(obstacle) → 0
else → top + left
```

---

## ❌ Common Mistakes

* Using `row-1` instead of `row > 0`
* Forgetting start cell obstacle check
* Wrong indexing (`temp[i]` ❌ → `temp[j]` ✅)
* Redundant obstacle checks for top/left

---

## 🎯 Final Mental Model

* Grid DP = **accumulate paths**
* Only 2 directions → **simple recurrence**
* Optimize: **2D → 1D**

---
