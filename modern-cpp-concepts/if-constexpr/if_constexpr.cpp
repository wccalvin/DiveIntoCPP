#include <iostream>
#include <type_traits>

template <typename T>
void printTypeInfo(const T& value) {
  if constexpr (std::is_integral<T>::value) {
    std::cout << "The value is an integer: " << value << std::endl;
  } else if constexpr (std::is_floating_point<T>::value) {
    std::cout << "The value is a floating point: " << value << std::endl;
  } else {
    std::cout << "The value is of another type: " << value << std::endl;
  }
}

int main() {
  printTypeInfo(42);       // Integer branch
  printTypeInfo(3.14);     // Floating point branch
  printTypeInfo("Hello");  // Other type branch
}
