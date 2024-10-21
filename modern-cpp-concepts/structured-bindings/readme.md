# Structured Bindings

Structured bindings provide a convenient way to unpack objects into individual named variables.

## Syntax

```cpp
auto [var1, var2, var3] = some_tuple;
```

## Note

* By default, structured bindings copy the elements. To avoid copies, you can use references:

```cpp
auto& [var1, var2, var3] = some_tuple; // bind by reference
```