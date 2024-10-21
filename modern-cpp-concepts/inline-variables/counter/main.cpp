#include <iostream>

#include "counter.h"

void incrementCounter() {
  ++global_counter;
  std::cout << "Counter incremented to " << global_counter << std::endl;
}

void printCounter() { std::cout << "Counter: " << global_counter << std::endl; }

int main() {
  incrementCounter();
  printCounter();
  return 0;
}