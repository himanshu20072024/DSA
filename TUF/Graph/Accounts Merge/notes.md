# 📌 Accounts Merge — DSU (Disjoint Set Union)

---

## 🧠 Problem Understanding

We are given a list of accounts where:

* Each account contains:

  * A **name**
  * Multiple **emails**

👉 If two accounts share **at least one common email**, they belong to the **same person** and must be merged.

---

## 🔥 Core Idea

> Treat each account as a node and emails as connectors.

* Accounts = Nodes
* Emails = Edges
* Same email ⇒ connect nodes

👉 Use **DSU (Union-Find)** to merge accounts.

---

## ⚙️ Approach

### 🔹 Step 1: Initialize DSU

* Each account is its own parent initially
* Use:

  * Path Compression
  * Union by Size (or Rank)

---

### 🔹 Step 2: Map Emails to Account Index

```cpp
unordered_map<string, int> mapMailNode;
```

* Traverse all accounts:

  * If email not seen → store index
  * If seen → union current account with stored account

---

### 🔹 Step 3: Union Accounts

```cpp
ds.unionBySize(mapMailNode[mail], i);
```

👉 Connect accounts sharing same email

---

### 🔹 Step 4: Group Emails by Ultimate Parent

```cpp
vector<string> mergeMail[n];
```

* For each email:

  * Find its parent using DSU
  * Store under that parent

---

### 🔹 Step 5: Build Final Answer

* For each parent:

  * Sort emails
  * Add name + emails to result

---

## ✅ Code Flow Summary

```
accounts → map emails → union accounts → group by parent → sort → answer
```

---

## ⏱️ Time Complexity

* DSU operations: **O(N * α(N))**
* Sorting emails: **O(M log M)**

👉 Overall: **~O(N log N)**

---

## ❌ Mistakes (IMPORTANT — MUST REMEMBER)

```
❌ Using VLA: vector<string> mergeMail[n]
   → Not standard C++, may fail in strict compilers

❌ Should use:
   vector<vector<string>> mergeMail(n);

⚠️ Name mismatch risk:
   temp.push_back(accounts[i][0]);
   → i may not be ultimate parent

✅ Safer:
   temp.push_back(accounts[ds.findUltimateParent(i)][0]);

⚠️ Prefer:
   mergeMail[i].empty()
   over:
   mergeMail[i].size() == 0
```

---

## 💡 Key Insight

> Emails are the real identifiers, NOT account indices.

* Accounts are just containers
* Emails define connectivity
* DSU merges based on shared emails

---

## 🚀 Pattern Recognition (VERY IMPORTANT)

Use **DSU** when:

* Need to **merge groups dynamically**
* Elements are connected by **shared properties**

### Common Problems:

* Accounts Merge
* Number of Islands II
* Kruskal’s MST
* Connected Components
* Similar String Groups

---

## 🎯 Interview Explanation (1-Min Answer)

> “I treat each account as a node and use DSU to merge accounts sharing emails. Then I group emails by their ultimate parent and sort them to build the final merged accounts.”

---

## 🧾 Final Clean Code (Reference)

```cpp
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();
        DisjointSet ds(n);

        unordered_map<string, int> mapMailNode;

        // Step 1: Build DSU
        for(int i = 0; i < n; i++) {
            for(int j = 1; j < accounts[i].size(); j++) {
                string mail = accounts[i][j];

                if(mapMailNode.find(mail) == mapMailNode.end()) {
                    mapMailNode[mail] = i;
                } else {
                    ds.unionBySize(mapMailNode[mail], i);
                }
            }
        }

        // Step 2: Group emails by parent
        vector<vector<string>> mergeMail(n);

        for(auto &it: mapMailNode) {
            string mail = it.first;
            int node = ds.findUltimateParent(it.second);
            mergeMail[node].push_back(mail);
        }

        // Step 3: Prepare answer
        vector<vector<string>> ans;

        for(int i = 0; i < n; i++) {
            if(mergeMail[i].empty()) continue;

            sort(mergeMail[i].begin(), mergeMail[i].end());

            vector<string> temp;
            temp.push_back(accounts[ds.findUltimateParent(i)][0]);

            for(auto &mail: mergeMail[i]) {
                temp.push_back(mail);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
```

---

## 🔚 Final Takeaway

> DSU is powerful when problems involve **merging entities via shared connections** — here, emails act as the bridge.
