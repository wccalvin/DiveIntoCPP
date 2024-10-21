#include <iostream>
#include <string>

template <typename... Args>
std::string concatenate(Args... args) {
  return (std::string(args) + ...);  // unary left fold
}

int main() {
  std::string name = concatenate("Clayton", " ", "William");
  std::cout << name << std::endl;
  return 0;
}