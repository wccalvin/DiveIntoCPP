#include <iostream>

template <typename... Args>
bool allTrue(Args... args) {
  return (args && ...);  // unary right fold
}

int main() {
  std::cout << "All true: " << allTrue(true, true, false) << std::endl;
  std::cout << "All true: " << allTrue(true, true) << std::endl;
}