// int (signed or unsigned)
// char (8 bits)
// float, double, long double
// bool (true or false) - 1 is true and 0 is false
// strings are not natively supported by the language. However it can be used by
// array of chars terminated by value 0 strings are supported using C++ std lib
// using class pointer - special data type for memory address. Pointers act as
// references to variables

// Reference: https://en.cppreference.com/w/cpp/language/types

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

void printTypeAndSizeInfo(auto& var) {
  size_t size = sizeof(var);
  cout << "-------" << endl;
  cout << "Value of variable: " << var << endl;
  cout << "Type of variable: " << typeid(var).name() << endl;
  cout << "Size of variable: " << size << " bytes or " << size * 8 << " bits"
       << endl;
  cout << "-------" << endl;
}

int main() {
  int a = -5;
  printTypeAndSizeInfo(a);

  unsigned int h = 3;
  printTypeAndSizeInfo(h);

  char b = 0;
  printTypeAndSizeInfo(b);

  float c = 3.14;
  printTypeAndSizeInfo(c);

  double d = 3.14;
  printTypeAndSizeInfo(d);

  long double e = 3.14;
  printTypeAndSizeInfo(e);

  bool f = true;
  printTypeAndSizeInfo(f);

  string g = "hello";
  printTypeAndSizeInfo(g);

  cout << endl;
  cout << endl;
  return 0;
}