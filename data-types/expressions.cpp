/*
 * increment/decrement: ++, --
 * Arithmetic: + - * / %
 * Logical: && || !
 * Relational/Comparison: == != > < >= <=
 * Pointer/member access: * & -> .
 * Reference: https://en.cppreference.com/w/cpp/language/operator_precedence
 */

// example of indirection (dereference) and address-of below

#include <iostream>

int main() {
  int n = 1;
  int* pn = &n;  // address-of `n` assigned to pointer `pn`
  int m = *pn;   // dereferencing pointer `pn`
  // the code below creates a reference r that directly refers to n
  // in other words `r` is an alias of `n`
  int& r = *pn;
  // notice what happens when we change the value of n

  std::cout << "value of n: " << n << '\n';
  std::cout << "value of pn (pointer to n): " << pn << '\n';
  std::cout << "value of m (after dereferencing pn): " << m << '\n';
  std::cout << "value of r: " << r << '\n';
  std::cout << "-------" << '\n';

  r = 2;
  std::cout << "now the value of n is " << n
            << ", because r is a reference to n. Any change to r will directly "
               "modify n."
            << '\n';
  std::cout << "now the value of m is " << m << '\n';
  std::cout << "-------" << '\n';

  std::cout << std::endl;
  return 0;
}