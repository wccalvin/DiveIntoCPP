#include <iomanip>  // for formatting output
#include <iostream>
#include <string>
using namespace std;

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
  cout << setw(20) << "int: " << sizeof(int) << " bytes" << endl;
  cout << setw(20) << "short: " << sizeof(short) << " bytes" << endl;
  cout << setw(20) << "long: " << sizeof(long) << " bytes" << endl;
  cout << setw(20) << "char: " << sizeof(char) << " bytes" << endl;
  cout << setw(20) << "float: " << sizeof(float) << " bytes" << endl;
  cout << setw(20) << "double: " << sizeof(double) << " bytes" << endl;
  cout << setw(20) << "bool: " << sizeof(bool) << " bytes" << endl;
  cout << endl;

  cout << setw(20) << "---> 3 <---" << endl;  // formatting output
  // const variable cannot be changed
  const string name = "clayton";
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
  cout << "Ints" << setw(10);
  cout << "Floats" << setw(10);
  cout << "Doubles" << setw(10) << "\n";

  cout << a;
  cout << setw(12) << b;
  cout << setw(10) << c << "\n";
  cout << endl;

  cout << setw(20) << "---> 6 <---" << endl;
  return 0;
}
