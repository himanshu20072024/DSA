# Problem Statement

Given an n x n binary grid:

1 → land

0 → water

👉 You can change at most one 0 → 1

🎯 Return the size of the largest island possible

🧠 Core Idea

 - Treat grid as graph

 - Convert (row, col) → node = row * n + col

 - Use Disjoint Set (Union-Find) to connect adjacent 1s

 - For every 0, try converting it into 1 and check connected components


❌ Common Mistakes (VERY IMPORTANT)

- ❌ Forgetting to check unique parents → leads to double counting

- ❌ Using unionByRank instead of unionBySize → size info becomes useless

- ❌ Not handling all 1s case → wrong answer

- ❌ Wrong indexing: use row * n + col consistently

- ❌ Not using path compression → TLE risk

- ❌ Missing boundary check (ifExist) → runtime error

🧩 Pattern Recognition

👉 This problem is a mix of:

- DSU (Connected Components)

- Grid traversal

- Optimization using union-find

# Time Complexity

DSU operations: O(α(N)) ≈ constant

Grid traversal: O(n²)

👉 Overall: O(n²)

# Space Complexity

DSU arrays: O(n²)

🔥 Key Observations

- Use set to avoid double counting same component

- Mapping 2D → 1D is crucial

- Always use union by size here (size needed later)

🚀 Summary

Build DSU for all 1s

For each 0, simulate merge

Track max island size

Handle edge case (all 1s)