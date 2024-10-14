#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> msg{"Hello", "C++",     "World",
                               "from",  "VS Code", "and the C++ extension!"};

  for (const std::string &word : msg) {
    std::cout << word << " ";
  }
  std::cout << std::endl;
  std::cout << "---" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
}
