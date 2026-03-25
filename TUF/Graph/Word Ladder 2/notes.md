# Word Ladder II – Notes (Himanshu)

## 🔴 Initial Mistakes

### 1. Started with DFS ❌

* First instinct was DFS
* But problem asks for **shortest paths**
* DFS explores all paths → inefficient + incorrect

👉 **Fix:** Use **BFS** (level-order traversal)

---

### 2. Confusion in BFS with `usedOnLevel` ❌

* Mistakes in:

  * When to push into `usedOnLevel`
  * When to erase from set

👉 **Fix:**

* Add words to `usedOnLevel` **when pushing into queue**
* Erase them **only when level changes**

---

## 🧠 Core Concept

> **Shortest path in unweighted graph → BFS**

* Words = nodes
* One-letter transformation = edges

---

## ✅ Approach

### Step 1: BFS with path tracking

* Use:

  ```cpp
  queue<vector<string>>
  ```
* Store full transformation paths

---

### Step 2: Level handling

* Track current level using path size

```cpp
if(path.size() > level) {
    level = path.size();
    remove usedOnLevel words from set
}
```

---

### Step 3: Generate transformations

For each position:

* Replace character from `'a' → 'z'`
* Skip same character

```cpp
if(ch == original) continue;
```

---

### Step 4: Valid transformation

```cpp
if(st.count(newWord)) {
    newPath = path + newWord
    push into queue
    mark in usedOnLevel
}
```

---

### Step 5: Store answer

```cpp
if(word == endWord) {
    if(ans empty) → store
    else if same length → store
}
```

---

## ⚠️ Important Rules

### ✔️ Never push directly into `ans` during transformation

* Always go through BFS queue

---

### ✔️ Always backtrack correctly

* Use new vector (`newPath`)
* Avoid modifying original path

---

### ✔️ Do NOT erase immediately

* Delay removal using `usedOnLevel`
* Otherwise valid paths are lost

---

## 🔥 Key Insight

> `usedOnLevel` ensures multiple shortest paths are preserved

---

## ⚡ Complexity

* Time: **O(N × L × 26 × paths)**
* Space: High (due to storing paths)

---

## 🚀 Interview Takeaways

* Word Ladder I → BFS
* Word Ladder II → BFS + path tracking

---

## 💡 Upgrade Path

Next level optimization:

* BFS + parent mapping
* Then DFS to build paths

👉 Much faster for large inputs

---

## 🧠 Final Mental Model

> "Layer by layer build shortest paths, don’t rush to delete nodes"

---

## ✅ Status

* BFS concept → ✔️
* Path tracking → ✔️
* Level handling → ✔️
* Ready for interviews 🚀
