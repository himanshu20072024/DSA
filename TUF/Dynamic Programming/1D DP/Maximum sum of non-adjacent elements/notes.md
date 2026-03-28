# 🧠 Maximum Non-Adjacent Sum (DP Notes)

## 🔹 Problem

Given an array `nums`, find the **maximum sum of non-adjacent elements**.

---

## 🔹 Core Idea

At each index `i`, we have two choices:

* **Pick** → `nums[i] + dp[i-2]`
* **Not Pick** → `dp[i-1]`

👉 Transition:

```
dp[i] = max(nums[i] + dp[i-2], dp[i-1])
```

---

## 🔹 Base Cases

```
f(0) = nums[0]
f(idx < 0) = 0
```

---

## 🔹 1. Memoization (Top-Down)

### Code

```cpp
int f(int idx, vector<int>& nums, vector<int>& dp) {
    if(idx == 0) return nums[0];
    if(idx < 0) return 0;

    if(dp[idx] != -1) return dp[idx];

    int pick = nums[idx] + f(idx-2, nums, dp);
    int notPick = f(idx-1, nums, dp);

    return dp[idx] = max(pick, notPick);
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n, -1);
    return f(n-1, nums, dp);
}
```

### Complexity

* Time: `O(N)`
* Space: `O(N)` + recursion stack

---

## 🔹 2. Tabulation (Bottom-Up)

### Code

```cpp
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();

    vector<int> dp(n, 0);
    dp[0] = nums[0];

    for(int i = 1; i < n; i++) {
        int take = nums[i];
        if(i > 1) take += dp[i-2];

        int notTake = dp[i-1];

        dp[i] = max(take, notTake);
    }

    return dp[n-1];
}
```

### Complexity

* Time: `O(N)`
* Space: `O(N)`

---

## 🔹 3. Space Optimization (Best)

### Code

```cpp
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();

    int prev = nums[0];
    int prev2 = 0;

    for(int i = 1; i < n; i++) {
        int take = nums[i];
        if(i > 1) take += prev2;

        int notTake = prev;

        int curr = max(take, notTake);

        prev2 = prev;
        prev = curr;
    }

    return prev;
}
```

### Complexity

* Time: `O(N)`
* Space: `O(1)`

---

## 🔹 Edge Cases

* `n == 0 → return 0`
* `n == 1 → return nums[0]`

---

## 🔹 Pattern Recognition

✔ Same as:

* House Robber
* Pick / Not Pick DP

---

## 🔹 One-Line Summary

> At every index, choose max of **taking current + i-2** or **skipping and taking i-1**

---

## 🔹 Interview Tip

If you see:

* "non-adjacent"
* "cannot pick consecutive"

👉 Immediately think **Pick / Not Pick DP**
