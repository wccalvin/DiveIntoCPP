#include <iostream>
#include <string>
using namespace std;  // using just for example purposes

int main() {
  // first program (an example of single line comments)
  cout << "--------------> 1 <--------------" << endl;
  cout << "hello, world!" << endl;
  cout << endl;

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
  cout << endl;

  cout << "--------------> 3 <--------------" << endl;
  // const variable cannot be changed
  const std::string name = "clayton";
  cout << name << endl;
  cout << endl;

  cout << "--------------> 4 <--------------" << endl;
  // enums
  enum COLORS { Red, Orange, Yellow, Green, Blue, Indigo, Violet };
  COLORS favColor = Blue;
  cout << favColor << endl;  // prints the index #4
  // however we can compare the values but can't print values like you would
  // in an array or vector
  if (favColor == Yellow) {
    cout << "Halo!\n";
  } else if (favColor == Blue) {
    cout << "Blue\n";
  } else {
    cout << "Some other color\n";
  }
  cout << endl;

  return 0;
}