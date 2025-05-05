#include <iostream>

int main() {
  int year;
  std::cout << "Enter year: ";
  std::cin >> year;

  if (!(year < 1000) && !(year > 9999)) {
    std::cout << "Checking if " << year << " is a leap year.\n";
    if (year % 100 == 0 && !(year % 400)) {
      std::cout << year << " is not a leap year.\n";
    } else if (year % 400 == 0) {
      std::cout << year << " is a leap year.\n";
    } else if (year % 4 == 0) {
      std::cout << year << " is a leap year.\n";
    } else {
      std::cout << year << " is not a leap year.\n";
    }
  } else {
    std::cout << "Error: " << year << " is an invalid year.\n";
  }

  return 0;
}
