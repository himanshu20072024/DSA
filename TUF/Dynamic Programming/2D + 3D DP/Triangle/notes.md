## 🧠 Triangle Minimum Path Sum (DP)

### 🔹 Problem Pattern
- Triangle grid
- From (i, j) → 
  - down → (i+1, j)
  - downRight → (i+1, j+1)

---

## 🔹 1. Recursion + Memoization (Top-Down)

### State:
f(row, idx)

### Transition:
triangle[row][idx] + min(f(row+1, idx), f(row+1, idx+1))

### Base:
if(row == n-1) return triangle[row][idx]

### Notes:
- DP size: n x n
- Works fine

---

## 🔹 2. Tabulation (Bottom-Up)

### Base:
dp[n-1][i] = triangle[n-1][i]

### Transition:
dp[i][j] = triangle[i][j] + min(dp[i+1][j], dp[i+1][j+1])

### Order:
i: n-2 → 0  
j: i → 0

### Notes:
- Always j <= i
- DP size: n x n

---

## 🔹 3. Space Optimization (1D DP)

### Transition:
curr[j] = triangle[i][j] + min(next[j], next[j+1])

### Flow:
- next = last row
- build curr
- next = curr

---

## ⚠️ Mistakes

### ❌ Mistake 1:
vector<int> curr(i, 0);

✔ Fix:
vector<int> curr(i + 1, 0);

👉 indices go 0 → i

---

### ❌ Mistake 2:
Using m = triangle[n-1].size()

✔ Not needed:
Triangle is not rectangular → only n matters

---

### ❌ Mistake 3:
next[j+1] fear of out-of-bounds

✔ Safe because:
next size ≥ i+1

---

## 🔹 Complexity

Recursion+Memo → O(n²), O(n²)  
Tabulation → O(n²), O(n²)  
Space Opt → O(n²), O(n) ✅

---

## 🔥 Intuition
Start from bottom → collapse triangle using min(down, downRight)