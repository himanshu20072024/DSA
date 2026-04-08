# 🧗 Path With Minimum Effort (Dijkstra on Grid)

## 🧭 Intuition (My Understanding)

Starting from (0,0), we have to reach the destination (n-1, m-1).

From each cell, we can move in 4 directions (up, down, left, right).

For every move:
- We calculate the difference between current cell and next cell:
  
  currentEffort = abs(heights[newRow][newCol] - heights[row][col])

Now, we track the effort of the entire path:
- Path effort = maximum effort encountered so far in that path

So:
- If current effort is greater than previous efforts → it becomes the new path effort
- Otherwise, previous max effort continues

---

## 🧠 Core Idea

We are NOT minimizing sum of efforts.

We are minimizing:
> the maximum effort in the entire path

So at every step:newEffort = max(previousEffort, currentEffort)


---

## ⚙️ Algorithm (Dijkstra Approach)

We use a **priority queue (min-heap)** to always process the path with the minimum effort first.

### Steps:

1. Initialize:
   - dist matrix with INT_MAX
   - dist[0][0] = 0
   - push (0, {0,0}) into priority queue

2. While pq is not empty:
   - Take the cell with minimum effort
   - If it is destination → return effort

3. For all 4 directions:
   - Calculate newRow, newCol
   - Check bounds

4. Compute:currentEffort = abs(height difference)
newEffort = max(previousEffort, currentEffort)


5. Relaxation:if(newEffort < dist[newRow][newCol]):
update dist
push into pq


---

## 📊 Role of Priority Queue

- It ensures that at each step, the path with the **minimum effort so far** is processed first
- Even though 4 new nodes are explored at each step, PQ guarantees optimal order

---

## ❌ Why Normal Queue (BFS) Fails?

- BFS works when all edges have equal weight
- Here:
- Edge weights vary
- Path cost depends on max edge, not number of steps

So BFS cannot guarantee the correct minimum effort path

---

## 🧠 Key Insight

This is a modified Dijkstra where:
- Instead of sum → we use max
- Distance = minimum possible maximum edge weight

---

## ⚡ One Line Summary

Minimize the maximum height difference along the path using Dijkstra with a priority queue.