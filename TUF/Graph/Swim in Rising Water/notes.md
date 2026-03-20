# Swim in Rising Water

🔗 Source: https://leetcode.com/problems/swim-in-rising-water/

---

## 🧠 Pattern
Binary Search on Answer + DFS (Path Feasibility)

---

## 💡 Key Idea
- We are NOT minimizing steps  
- We are minimizing **maximum elevation in path**

👉 Think:
> “What is the minimum time `t` such that a path exists?”

- If path exists at time `t` → it will also exist for `t+1`
- This monotonic property → allows **Binary Search**

---

## ⚡ Algorithm Steps

1. Define search space:
   - `l = grid[0][0]`
   - `r = n*n - 1`

2. Apply Binary Search:
   - Pick `mid`

3. Check feasibility:
   - Can we reach `(n-1, n-1)` using only cells:
     ```
     grid[i][j] <= mid
     ```

4. If possible:
   - Store answer
   - Move left → `r = mid - 1`

5. Else:
   - Move right → `l = mid + 1`

---

## 🔍 DFS Function

```cpp
bool isPossible2Reach(int i, int j, int t, vector<vector<int>>& grid, int dest, vector<vector<int>>& vis) {
    if(i < 0 || i > dest || j < 0 || j > dest || vis[i][j] || grid[i][j] > t)
        return false;

    if(i == dest && j == dest) return true;

    vis[i][j] = 1;

    for(int d = 0; d < 4; d++) {
        int new_i = i + delRow[d];
        int new_j = j + delCol[d];

        if(isPossible2Reach(new_i, new_j, t, grid, dest, vis))
            return true;
    }

    return false;
}