# if constexpr

The `if constexpr` construct was introduced to provide a way to perform compile-time
conditional branching.

```cpp
if constexpr (condition is true) {
  // compile-time branch if true
} else {
  // compile-time branch if fals
}
```

## References

* Read about `SFINAE` (Substitution Failure Is Not An Error)