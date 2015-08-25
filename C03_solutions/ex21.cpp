#include <iostream>
#include <string>
using namespace std;

int main(){
    int size = 3;
    string a[size];
    a[0] = "asdfasdf";
    a[1] = "qwerqwer";
    a[2] = "zxcvxzcv";

    for (int i=0; i < size ; i++)
        cout << "a[" << i << "] : " << a[i] << endl ;

}
