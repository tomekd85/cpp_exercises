//: C03:PointerArithmetic.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#include <iostream>
using namespace std;

#define P(EX) cout << #EX << ": " << EX << endl;

int main() {
  long double a[10];
  for(int i = 0; i < 10; i++)
    a[i] = i; // Give it index values
  long double* ip = a;
  P(*ip);
  P(*++ip);
  P(*(ip + 5));
  long double* ip2 = ip + 5;
  P(*ip2);
  P(*(ip2 - 4));
  P(*--ip2);
  P(ip2 - ip); // Yields number of elements
  long double* ip3 = &a[3];
  long double * ip4 = &a[8];
  P(*ip3);
  P(*ip4);
  cout << "ip3 : " << (long)ip3 << endl;
  cout << "ip4 : " << (long)ip4 << endl;
  cout << "ip4-ip3 = " << (long)(ip4-ip3) << endl;
} ///:~
