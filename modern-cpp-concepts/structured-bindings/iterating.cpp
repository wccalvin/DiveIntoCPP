#include <iostream>
#include <map>

int main() {
  std::map<int, std::string> vars = {{1, "foo"}, {2, "bar"}, {3, "baz"}};

  // Structured bindings are useful when iterating over containers like maps,
  // where each element key-value pair
  for (const auto& [id, name] : vars) {
    std::cout << id << ": " << name << std::endl;
  }
  return 0;
}