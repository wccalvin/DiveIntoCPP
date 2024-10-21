#include <iostream>
#include <string>

struct Car {
  std::string make;
  std::string model;
  int number;
};

int main() {
  Car car{"tesla", "model", 3};
  auto [a, b, i] = car;  // unpacking the Struct
  std::cout << a << " " << b << " " << i << std::endl;
  return 0;
}