#include <cmath>
#include <iostream>
using namespace std;

int main() {
  // volume of cube
  float side = 2.5;
  float volOfCube = pow(side, 3);
  cout << "Volume of cube: " << volOfCube << endl;

  // area of circle
  float radius = 2.5;
  float areaOfCircle = M_PI * pow(radius, 2);
  cout << "Area of circle: " << areaOfCircle << endl;

  // area of rectangle
  float width = 4.5;
  float height = 5.5;

  int areaOfRectangle = width * height;  // datatype changed
  cout << "Area of rectangle: " << areaOfRectangle << endl;

  // division
  int numerator = 4;
  float denominator = 5;

  float answer = numerator / denominator;
  cout << "Division result: " << answer << endl;

  // prefix and postfix
  /* Prefix: ++a
   * Increment the value and then return a reference
   *
   * Postfix: a++
   * create a copy of the variable, increment the value, then return the copied
   * value from before the increment
   */
  int a = 0;
  int aa = ++a;
  cout << "prefix increment of " << a << " is " << aa << endl;

  int b = 0;
  int bb = a++;
  cout << "postfix increment of " << b << " is " << bb << endl;
  return 0;
}