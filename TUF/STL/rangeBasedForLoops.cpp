// | Syntax                            | Description                                       | When to use                                                                                   |
// | --------------------------------- | ------------------------------------------------- | --------------------------------------------------------------------------------------------- |
// | `for (auto x : container)`        | Copies each element into `x`                      | Use for small or cheap-to-copy types; safe from accidental modification but uses extra memory |
// | `for (auto& x : container)`       | Reference to original element; no copy            | Use when you want to **modify** elements in the container; beware accidental changes          |
// | `for (const auto& x : container)` | Reference to original element; no copy; read-only | Use for **read-only** access to avoid copies and save memory; safest for large/complex types  |
