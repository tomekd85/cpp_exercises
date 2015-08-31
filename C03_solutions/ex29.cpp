//: C03:FloatingAsBinary.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
//{L} printBinary
//{T} 3.14159
#include "printBinary.h"
#include <cstdlib>
#include <iostream>
using namespace std;


void printDoubleBit(int bitNumber, double* number){
    unsigned char* cp = reinterpret_cast<unsigned char*>(number);
    int double_size = sizeof(double);
    int octet_number = bitNumber / double_size;
    int bit_in_octet = bitNumber % double_size;
    if (*(cp+octet_number) & (1 << bit_in_octet))
        cout << "1" ;
    else
        cout << "0" ;

}


int main(int argc, char* argv[]) {
  if(argc != 2) {
    cout << "Must provide a number" << endl;
    exit(1);
  }
  double d = atof(argv[1]);
  unsigned char* cp = 
    reinterpret_cast<unsigned char*>(&d);
  for(int i = sizeof(double)-1 ; i >= 0 ; i--) {
    printBinary(cp[i]);
    cout << " ";
  }
  cout << endl << endl;

  cout << "Double representation in groups :" << endl;
  cout << "Sign bit : " ;
  printDoubleBit(63,&d);
  cout << endl;
  cout << "Exponent : ";
  for (int i = 62 ; i > 51 ; i--)
      printDoubleBit(i,&d);
  cout << endl ;
  cout << "Fraction : ";
  for (int i = 51 ; i >=0 ; i--)
      printDoubleBit(i,&d);
  cout << endl ;



} ///:~
