#include "ex01.h"
#include <iostream>
using namespace std;

void f1(){
    cout << "called f1: " << endl ;
    cout << "arguments: none" << endl;
}


int f2(int a, int b, int c){
    cout << "called f2: " << endl ;
    cout << "arguments: a = " << a << ", b = " << b << ", c = " << c << endl ;
    return a+b+c ;
}

float f3(float a, float b){
    cout << "called f3: " << endl ;
    cout << "arguments: a = " << a << ", b = " << b << endl ;
    return a+b ;
}

char f4(char a, char b){
    cout << "called f4: " << endl ;
    cout << "arguments: a = " << a << ", b = " << b << endl ;
    if (a > b)
        return a ;
    else
        return b ;

}

