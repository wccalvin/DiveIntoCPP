#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "What is your full name: ";
  cin >> name;  // stops when encountering the first white space
  cout << "Name: " << name << endl;
  return 0;
}