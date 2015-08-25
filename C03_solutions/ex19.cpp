//: C03:ArrayAddresses.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#include <iostream>
using namespace std;

int main() {
  float a[10];
  cout << "sizeof(float) = "<< sizeof(float) << endl;
  for(int i = 0; i < 10; i++)
    cout << "&a[" << i << "] = " 
         << (long)&a[i] << endl;
} ///:~
