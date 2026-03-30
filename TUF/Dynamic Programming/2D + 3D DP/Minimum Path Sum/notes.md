# 🧠 Min Path Sum (Grid DP)

## 🔹 Problem Pattern
- Grid DP
- Moves: up / left (or down / right)
- Goal: minimum path sum

---

## 🔸 1. Pure Recursion (Brute Force)
- Try all paths → exponential
- Transition:
  f(i,j) = grid[i][j] + min(f(i-1,j), f(i,j-1))
- Base:
  - (0,0) → grid[0][0]
  - out of bounds → 1e9

Time: O(2^(m+n))  
Space: O(m+n)

---

## 🔸 2. Memoization (Top-Down DP)
- Use dp[i][j]
- Avoid recomputation

Time: O(m*n)  
Space: O(m*n) + recursion stack

---

## 🔸 3. Tabulation (Bottom-Up)
- Build dp table

dp[i][j] = grid[i][j] + min(top, left)

- Base:
  dp[0][0] = grid[0][0]

Time: O(m*n)  
Space: O(m*n)

---

## 🔸 4. Space Optimized (1D DP)
- prev[j] → previous row
- curr[j-1] → left

⚠️ 1D array = columns → size = n

Time: O(m*n)  
Space: O(n)

---

## ❌ Mistakes

1. Variable Shadowing
   int top = 1e9;
   if(i > 0) {
       int top = dp[i-1][j]; ❌
   }
   ✔️ remove 'int'

---

2. Wrong Dimension
   vector<int> prev(m, 0); ❌
   ✔️ vector<int> prev(n, 0);

---

3. Row vs Column Confusion
   i → row (m)
   j → column (n)

---

4. Wrong Approach Mixing
- Used global minSum ❌
- Mixed recursion + dp incorrectly ❌

---

## ⚡ Template

for(i → rows)
    for(j → cols)
        dp[i][j] = grid[i][j] + min(top, left)

---

## 🔥 Checklist

[ ] dimensions correct (m vs n)  
[ ] no shadowing  
[ ] base case correct  
[ ] boundaries handled  
[ ] dp meaning clear  

---

## 🎯 Insight
- Logic strong ✅
- Implementation mistakes ❌
- Fix = slow down + dry run once