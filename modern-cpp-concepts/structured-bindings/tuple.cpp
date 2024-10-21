#include <iostream>
#include <tuple>

int main() {
  std::tuple<int, double, std::string> data = {1, 3.14, "C++23"};

  // decomposing a tuple
  auto [id, val, txt] = data;  // Structured binding

  std::cout << id << std::endl;
  std::cout << val << std::endl;
  std::cout << txt << std::endl;
  return 0;
}