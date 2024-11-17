#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Enter full name: ";
  getline(
      cin,
      fullName);  // parses given input string until a new line is encountered
  cout << "Given name is " << fullName << endl;
  return 0;
}