# 🥷 Ninja Training – DP Notes (Fast Revision)

---

# 🔷 Problem Summary

* `n` days
* 3 tasks each day: `0,1,2`
* ❌ Cannot repeat same task on consecutive days
* 🎯 Maximize total points

---

# 🔷 DP State (CORE IDEA)

```cpp
dp[day][last]
```

👉 Meaning:
Max points till `day`
if **previous day's task = last**

---

# 🔷 last Values

| last | Meaning         |
| ---- | --------------- |
| 0    | last task was 0 |
| 1    | last task was 1 |
| 2    | last task was 2 |
| 3    | no restriction  |

---

# 🔥 GOLDEN RULE (MOST IMPORTANT)

👉
**If you choose task = t today → use dp[day-1][t]**

```cpp
points[day][t] + dp[day-1][t]
```

---

# 🔷 RECURSION + MEMOIZATION

```cpp
int f(int day, int last, vector<vector<int>>& points, vector<vector<int>>& dp) {

    if(day == 0) {
        int maxi = 0;
        for(int i = 0; i < 3; i++) {
            if(i != last) {
                maxi = max(maxi, points[0][i]);
            }
        }
        return dp[day][last] = maxi;
    }

    if(dp[day][last] != -1) return dp[day][last];

    int maxi = 0;
    for(int i = 0; i < 3; i++) {
        if(i != last) {
            int curr = points[day][i] + f(day-1, i, points, dp);
            maxi = max(maxi, curr);
        }
    }

    return dp[day][last] = maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points) {
    vector<vector<int>> dp(n, vector<int>(4, -1));
    return f(n-1, 3, points, dp);
}
```

---

# 🔷 TABULATION

```cpp
int ninjaTraining(int n, vector<vector<int>> &points) {

    vector<vector<int>> dp(n, vector<int>(4, 0));

    // Base case
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][0], points[0][1]);
    dp[0][3] = max(points[0][0], max(points[0][1], points[0][2]));

    for(int day = 1; day < n; day++) {
        for(int last = 0; last < 4; last++) {

            dp[day][last] = 0;

            for(int task = 0; task < 3; task++) {
                if(task != last) {
                    int point = points[day][task] + dp[day-1][task];
                    dp[day][last] = max(dp[day][last], point);
                }
            }
        }
    }

    return dp[n-1][3];
}
```

---

# 🔷 SPACE OPTIMIZATION (BEST)

```cpp
int ninjaTraining(int n, vector<vector<int>> &points) {

    vector<int> prev(4, 0);

    prev[0] = max(points[0][1], points[0][2]);
    prev[1] = max(points[0][0], points[0][2]);
    prev[2] = max(points[0][0], points[0][1]);
    prev[3] = max(points[0][0], max(points[0][1], points[0][2]));

    for(int day = 1; day < n; day++) {

        vector<int> temp(4, 0);

        for(int last = 0; last < 4; last++) {
            for(int task = 0; task < 3; task++) {
                if(task != last) {
                    int point = points[day][task] + prev[task];
                    temp[last] = max(temp[last], point);
                }
            }
        }

        prev = temp;
    }

    return prev[3];
}
```

---

# 🔷 WHY dp[n-1][3] ?

👉 `3 = no restriction`
👉 Final answer → maximum of all tasks

---

# 🔷 TIME & SPACE

| Approach         | Time | Space        |
| ---------------- | ---- | ------------ |
| Recursion + Memo | O(N) | O(N) + stack |
| Tabulation       | O(N) | O(N)         |
| Space Optimized  | O(N) | O(1)         |

---

# 🔥 FINAL MENTAL MODEL

👉
**“Today’s task decides which previous state I come from.”**

---

# ⚡ INTERVIEW ANSWER LINE

If asked:

👉 Why `dp[day-1][task]`?

✔️ Say:

> “If I pick task `t` today, I must come from a state where yesterday ended with task `t`.”

---

# ✅ DONE

Revise this once → problem permanently clear.
