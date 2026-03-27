# Climbing Stairs - Dynamic Programming Notes

## Problem Statement
You are climbing a staircase with `n` steps. Each time you can climb 1 or 2 steps. How many distinct ways can you climb to the top?

## Key Insight
At each step `i`, you can arrive from step `i-1` (1 step) or step `i-2` (2 steps).
Therefore: `ways(i) = ways(i-1) + ways(i-2)`

## Recurrence Relation
```
dp[i] = dp[i-1] + dp[i-2]
Base cases: dp[0] = 1, dp[1] = 1
```

## Solution Approaches

### 1. Bottom-Up DP (Tabulation)
- Time: O(n), Space: O(n)
- Build solution iteratively from base cases

### 2. Top-Down DP (Memoization)
- Time: O(n), Space: O(n)
- Use recursion with caching

### 3. Space-Optimized
- Time: O(n), Space: O(1)
- Only track previous two values

## Example
```
n=3: [1,1,1] → ways = 3
    (1+1+1, 1+2, 2+1)
```

## Common Variations
- Climbing with restricted steps
- Climbing with obstacles
- Minimum cost climbing