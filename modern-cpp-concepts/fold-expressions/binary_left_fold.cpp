#include <iostream>

template <typename... Args>
auto multiply(Args... args) {
  return (1 * ... * args);  // binary left fold with initial value 1
}

int main() {
  std::cout << "Product: " << multiply(2, 3, 4) << std::endl;
  return 0;
}
