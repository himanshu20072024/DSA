// | Feature            | `map`      | `multimap` | `unordered_map`      |
// | ------------------ | --------   | ---------- | -------------------- |
// | Duplicate keys     | ❌ No     | ✅ Yes     | ❌ No                 |
// | Key order          | ✅ Sorted | ✅ Sorted  | ❌ Unordered          |
// | Access with `[]`   | ✅ Yes    | ❌ No      | ✅ Yes                |
// | Time complexity    | O(log n)   | O(log n)   | O(1) avg, O(n) worst |
// | Internal structure | BST        | BST        | Hash Table           |
