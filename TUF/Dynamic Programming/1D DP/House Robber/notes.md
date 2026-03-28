# 🏠 House Robber (DP Revision Notes)

## 🔹 Problem

Maximize money such that **no two adjacent houses are robbed**.

---

## 🔹 Core Idea (Pick / Not Pick)

At index `i`:

* **Rob** → `nums[i] + f(i-2)`
* **Not Rob** → `f(i-1)`

👉 Recurrence:

```id="n9s3x1"
dp[i] = max(nums[i] + dp[i-2], dp[i-1])
```

---

## 🔹 Base Cases

```id="g8q2mz"
f(0) = nums[0]
f(idx < 0) = 0
```

---

## 🔹 1. Memoization (Top-Down)

```cpp id="s1o2pf"
int f(int idx, vector<int>& dp, vector<int>& nums) {
    if(idx == 0) return nums[0];
    if(idx < 0) return 0;

    if(dp[idx] != -1) return dp[idx];

    int rob = nums[idx] + f(idx-2, dp, nums);
    int notRob = f(idx-1, dp, nums);

    return dp[idx] = max(rob, notRob);
}

int rob(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, -1);
    return f(n-1, dp, nums);
}
```

🧠 Time: `O(N)`
🧠 Space: `O(N)` + recursion

---

## 🔹 2. Space Optimized (Best)

```cpp id="x7p2la"
int rob(vector<int>& nums) {
    int n = nums.size();

    int prev = nums[0];   // dp[i-1]
    int prev2 = 0;        // dp[i-2]

    for(int i = 1; i < n; i++) {
        int rob = nums[i];
        if(i > 1) rob += prev2;

        int notRob = prev;

        int curr = max(rob, notRob);

        prev2 = prev;
        prev = curr;
    }

    return prev;
}
```

🧠 Time: `O(N)`
🧠 Space: `O(1)`

---

## 🔹 Edge Cases

* `n == 1 → return nums[0]`

---

## 🔹 Key Variables

| Variable | Meaning         |
| -------- | --------------- |
| `prev`   | best till `i-1` |
| `prev2`  | best till `i-2` |

---

## 🔹 Common Mistake ❌

```id="z8k2qv"
notRob = nums[i-1]   // WRONG
```

✅ Correct:

```id="k1v9pz"
notRob = prev
```

---

## 🔹 Pattern Recognition

✔ Maximum Non-Adjacent Sum
✔ Pick / Not Pick DP

---

## 🔹 One-Line Summary

> At each house: **rob (i + i-2)** or **skip (i-1)** → take max

---

## 🔹 Interview Tip

If you see:

* "cannot rob adjacent"
* "non-adjacent constraint"

👉 Immediately apply **Pick / Not Pick DP**
