#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  int length, width;
  string lengthRoom, widthRoom;
  cout << "Enter the length of the room in feet: ";
  cin >> lengthRoom;
  cout << "Enter the width of the room in feet: ";
  cin >> widthRoom;
  stringstream(lengthRoom) >> length;
  stringstream(widthRoom) >> width;
  cout << "Area of the room is " << length * width << " sqft." << endl;

  return 0;
}