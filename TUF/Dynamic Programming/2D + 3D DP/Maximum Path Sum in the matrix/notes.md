# 🧠 Maximum Path Sum in Matrix (DP) — Quick Revision

---

## 📌 Problem

* Start from **any column in first row**
* Move:

  * ⬇️ Down → `(i+1, j)`
  * ↙️ Down-left → `(i+1, j-1)`
  * ↘️ Down-right → `(i+1, j+1)`
* Find **maximum path sum**

---

## 🔁 Approaches

### 1️⃣ Brute Force (Recursion)

* Try all 3 paths at each step
* Base: `row == n-1 → return matrix[row][col]`

**Time:** `O(3^(n*m))` ❌ (TLE)
**Space:** `O(n)` (stack)

---

### 2️⃣ Memoization (Top-Down DP)

* Store results in `dp[row][col]`
* Avoid recomputation

**Time:** `O(n*m)` ✅
**Space:** `O(n*m) + O(n)` recursion

---

### 3️⃣ Tabulation (Bottom-Up DP)

* Build from last row → top
* Transition:

```
dp[i][j] = matrix[i][j] + max(
    dp[i+1][j],
    dp[i+1][j-1],
    dp[i+1][j+1]
)
```

**Time:** `O(n*m)`
**Space:** `O(n*m)`

---

### 4️⃣ Space Optimized (Best)

* Use only 2 rows:

  * `next` → row below
  * `curr` → current row

**Time:** `O(n*m)`
**Space:** `O(m)` ✅

---

## ⚡ Core Logic (Same for all)

* Always depend on **row below (`i+1`)**
* Handle boundaries carefully:

  * `j-1 >= 0`
  * `j+1 < m`
* Use `INT_MIN` for invalid paths

---

## ❌ Mistakes You Made (Important)

### 🔴 1. Variable Shadowing

```cpp
int sum1 = ...
```

* Created new variable inside `if`
* Original stayed `INT_MIN`

---

### 🔴 2. Wrong max usage

```cpp
max(a, b, c) ❌
```

✅ Correct:

```cpp
max(a, max(b, c))
```

---

### 🔴 3. Global Variable Bug

```cpp
int maxMax; // global ❌
```

* Not reset between calls → wrong answers

---

### 🔴 4. DP Indexing Bug

```cpp
dp[1+1][j+1] ❌
```

* Used fixed index instead of `i+1`

---

### 🔴 5. Space Optimization Bug

```cpp
next = curr;  // inside inner loop ❌
```

* Overwrites state prematurely

✅ Fix:

```cpp
// after finishing entire row
next = curr;
```

---

### 🔴 6. Wrong DP Dimension Usage

```cpp
vector<int> curr;
curr[i][j] ❌
```

* 1D used like 2D

---

### 🔴 7. Missing Semicolon

```cpp
vector<vector<int>> dp(...) ❌
```

* Caused compile error before `for`

---

## 🧠 Patterns to Remember

* **Grid DP = directions + base case + boundaries**
* **Space optimization = use previous row only**
* **Never overwrite state mid-computation**

---

## ⚡ Final Mental Model

👉 “Each cell = value + best of 3 below”
👉 “Build from bottom → top”
👉 “Keep previous row safe”

---

## 🚀 Interview Tip

If interviewer asks optimization:

* Start with recursion
* → memoization
* → tabulation
* → space optimized

---

## 🧩 Complexity Summary

| Approach        | Time          | Space  |
| --------------- | ------------- | ------ |
| Recursion       | Exponential ❌ | O(n)   |
| Memoization     | O(n*m)        | O(n*m) |
| Tabulation      | O(n*m)        | O(n*m) |
| Space Optimized | O(n*m)        | O(m) ✅ |

---

## 🔥 One-Line Summary

> “Classic grid DP — 3 directions, bottom-up, optimize to 1D”

---
