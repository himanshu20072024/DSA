# 🧠 Unique Paths — Quick Revision Notes

## 📌 Problem Trigger
- Grid m × n
- Start → (0,0), End → (m-1,n-1)
- Moves: only **Right →** and **Down ↓**

---

## 💡 Core Idea
- At any cell → paths = **from top + from left**
- OR → go **down + right**

---

## 🔁 Recursion Thinking
### Approach 1 (Top → Bottom)
- From (i,j) → go:
  - Down → (i+1, j)
  - Right → (i, j+1)
- Base: reached destination → return 1

### Approach 2 (Bottom → Top)
- From (i,j) → came from:
  - Up → (i-1, j)
  - Left → (i, j-1)
- Base: (0,0) → return 1

---

## ⚠️ Recursion Issue
- Overlapping subproblems
- Exponential → ❌ TLE

---

## 🧠 DP Transition (MOST IMPORTANT)
👉 `dp[i][j] = dp[i-1][j] + dp[i][j-1]`

---

## 📊 Base Cases
- `dp[0][0] = 1`
- First row → only from left
- First col → only from top

---

## 🧠 Memoization
- Add `dp[][]`
- Store answers → avoid recomputation

---

## 📊 Tabulation Flow
- Fill grid from (0,0)
- Row-wise or column-wise
- Always check bounds

---

## ⚡ Space Optimization
- Only need **previous row**
- Use 1D array

---

## 🔥 Pattern Recognition
- Classic **Grid DP**
- Movement restricted → no cycles
- Always think:
  - "From where can I come?"

---

## 🚀 Combinatorics Shortcut
- Total moves = (m-1) + (n-1)
- Choose positions of one type:
👉 `C(m+n-2, m-1)`

---

## 🧠 Interview Strategy
1. Start with recursion idea
2. Identify overlap → DP
3. Write transition
4. Optimize space if asked

---

## ❌ Common Mistakes
- Forget base case (0,0)
- Out of bounds
- Variable shadowing (int inside if)
- Using VLA instead of vector

---

## ⚡ One-Line Memory Trick
👉 "Each cell = ways from **top + left**"