#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // create output stream to write to a file in append mode
  string fileName = "inp.txt";
  ofstream outFileStream(fileName, ios::app);
  if (outFileStream.is_open()) {
    cout << "File opened for writing ...\n";
    outFileStream << "\n\n... start ...\n";
    outFileStream << "Hello Clayton:\n";
    outFileStream << "some text ...\n";
    outFileStream << "some more ...\n";
    outFileStream << "... end ...\n";
    outFileStream.close();
    cout << "File closed after writing ...\n";  // this will be lost of course
    outFileStream << "try writing after file is closed.\n";
  } else {
    cerr << "ERROR: error opening file for writing.\n";
  }

  // read contents of the written file
  ifstream inFileStream(fileName);
  string line;
  if (inFileStream.is_open()) {
    // read file line by line
    while (getline(inFileStream, line)) {
      cout << line << endl;
    }
  } else {
    cerr << "ERROR: error opening file for reading.\n";
  }

  return 0;
}