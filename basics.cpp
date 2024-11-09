#include <iomanip>  // for formatting output
#include <iostream>
#include <string>
using namespace std;  // using just for example purposes

int main() {
  // first program (an example of single line comments)
  cout << setw(20) << "---> 1 <---" << endl;
  // cout << "--------------> 1 <--------------" << endl;
  cout << "hello, world!" << endl;
  cout << endl;

  /* example of
   * multi-line
   * comments (* is used for aesthetics is every line, only needed at the
   * begining and end of multi-line comments)
   */

  // variables
  cout << setw(20) << "---> 2 <---" << endl;  // formatting output
  cout << "int: " << sizeof(int) << " bytes" << endl;
  cout << "short: " << sizeof(short) << " bytes" << endl;
  cout << "long: " << sizeof(long) << " bytes" << endl;
  cout << "char: " << sizeof(char) << " bytes" << endl;
  cout << "float: " << sizeof(float) << " bytes" << endl;
  cout << "double: " << sizeof(double) << " bytes" << endl;
  cout << "bool: " << sizeof(bool) << " bytes" << endl;
  cout << endl;

  cout << setw(20) << "---> 3 <---" << endl;  // formatting output
  // const variable cannot be changed
  const std::string name = "clayton";
  cout << name << endl;
  cout << endl;

  cout << setw(20) << "---> 4 <---" << endl;  // formatting output
  // enums
  enum COLORS { Red, Orange, Yellow, Green, Blue, Indigo, Violet };
  COLORS favColor = Blue;
  cout << favColor << endl;  // prints the index #4
  // however we can compare the values but can't print values like you would
  // in an array or vector
  if (favColor == Yellow) {
    cout << "Halo!\n";  // new line escape sequence
  } else if (favColor == Blue) {
    cout << "Blue\n";
  } else {
    cout << "Some other color\n";
  }
  cout << endl;

  cout << setw(20) << "---> 5 <---" << endl;  // formatting output
  int a = 45;
  float b = 45.323;
  double c = 45.5468;
  std::cout << "Ints" << std::setw(10);
  std::cout << "Floats" << std::setw(10);
  std::cout << "Doubles" << std::setw(10) << "\n";

  std::cout << a;
  std::cout << std::setw(12) << b;
  std::cout << std::setw(10) << c << "\n";
  cout << endl;

  cout << setw(20) << "---> 6 <---" << endl;
  return 0;
}