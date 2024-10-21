#include <iostream>

// Unary left fold: (... op pack)
template <typename... Args>
auto sum(Args... args) {
  return (... + args);  // Unary left fold
}

int main() {
  std::cout << "Sum: " << sum(1, 4, 9, 12, 17, 21, 27) << std::endl;
  std::cout << "Sum: " << sum(0, 1, 2, 3, 4) << std::endl;
  return 0;
}