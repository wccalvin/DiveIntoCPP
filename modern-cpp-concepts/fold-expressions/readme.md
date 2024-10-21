# fold expression

A `fold expression` applies and operator (such as `+`, `*`, `&&`, `||`, etc.) over all elements
of a parameter pack. This allows concise and readable code when dealing with a variable number
of arguments

## Types

1. Unary left fold: `(... op pack)`
2. Unary right fold: `(pack op...)`
3. Binary left fold: `(init op ... op pack)`
4. Binary right fold: `(pack op ... op init)`
