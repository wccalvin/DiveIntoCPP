#include <iostream>
#include <string>
using namespace std;  // using just for example purposes

int main() {
  // first program (an example of single line comments)
  cout << "--------------> 1 <--------------" << endl;
  cout << "hello, world!" << endl;

  /* example of
   * multi-line
   * comments (* is used for aesthetics is every line, only needed at the
   * begining and end of multi-line comments)
   */

  // variables
  cout << "--------------> 2 <--------------" << endl;
  cout << "int: " << sizeof(int) << " bytes" << endl;
  cout << "short: " << sizeof(short) << " bytes" << endl;
  cout << "long: " << sizeof(long) << " bytes" << endl;
  cout << "char: " << sizeof(char) << " bytes" << endl;
  cout << "float: " << sizeof(float) << " bytes" << endl;
  cout << "double: " << sizeof(double) << " bytes" << endl;
  cout << "bool: " << sizeof(bool) << " bytes" << endl;

  cout << "--------------> 2 <--------------" << endl;
  // variable difined constant cannot be changed
  const std::string name = "clayton";
  cout << name << endl;
  return 0;
}