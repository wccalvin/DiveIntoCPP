#include <cstdio>
#include <iostream>

int main() {
  // Redirect both stdout and stderr to the same file
  FILE* file = freopen("out.txt", "w", stdout);
  if (file == nullptr) {
    std::cerr << "Failed to open file for redirection." << std::endl;
    printf("stdout and stderr will be directed to console.\n");
  }

  // Now redirect stderr to the same file as stdout
  freopen("out.txt", "a", stderr);

  // Print to stdout (goes to output_and_errors.txt)
  std::cout << "This is stdout" << std::endl;
  printf("This is stdout using printf.\n");

  // Print to stderr (also goes to output_and_errors.txt)
  std::cerr << "This is stderr" << std::endl;
  fprintf(stderr, "This is an error sent by fprintf.\n");

  return 0;
}
