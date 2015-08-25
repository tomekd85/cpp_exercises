//: C03:Ifthen.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// Demonstration of if and if-else conditionals
#include <iostream>
using namespace std;

int main() {
  int i;
  cout << "type a number and 'Enter'" << endl;
  cin >> i;
  (i > 5)?(cout << "It's greater than 5" << endl):((i < 5)?(cout << "It's less than 5 " << endl): cout << "It's equal to 5 " << endl);

  cout << "type a number and 'Enter'" << endl;
  cin >> i;
  (i < 10)?((i > 5)?cout << "5 < i < 10" << endl: cout << "i <= 5" << endl): cout << "i >= 10" << endl;
} ///:~
