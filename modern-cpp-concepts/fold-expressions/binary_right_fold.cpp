#include <iostream>

template <typename... Args>
auto subtract(Args... args) {
  return (args - ... - 0);  // binary right fold with initial value 0
}

int main() {
  std::cout << "Substraction result: " << subtract(10, 3, 2)
            << std::endl;  // (10 - (3 - (2 - 0)))
  return 0;
}