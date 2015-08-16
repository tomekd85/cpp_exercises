#include <iostream>
using namespace std;


void printBinInt(int a){
    for (int i = (sizeof(int) * 8) - 1 ; i >= 0 ; i--)
        cout << (a & (1<<i)) ;
}

void f1(bool a,bool b){
    printBinInt(a);
    cout << endl;
    printBinInt(b);
    cout << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "and : " << (a and b) << endl;
    cout << "or : " << (a or b) << endl;
    cout << "not a : " << (not a) << endl;
    cout << "not b : " << (not b) << endl;
    cout << "not_eq : " << (a not_eq b) << endl ;
}

void f2(int &a,int &b){
    printBinInt(a);
    cout << endl;
    printBinInt(b);
    cout << endl;
    cout << "a = " << a << ", b = " << b << endl ;
    cout << "bitand : " << (a bitand b) << endl ;
    //cout << "and_eq : " << (a and_eq b) << endl ;
    cout << "bitor : " << (a bitor b) << endl ;
    //cout << "or_eq : " << (a or_eq b) << endl ;
    //cout << "xor : " << (a xor b) << endl ;
    //cout << "xor_eq : " << (a xor_eq b) << endl;
    //cout << "compl a : " << (compl a) << endl ;
}

int main(){
    int a=1;
    int b=0;
    bool c = true, d=false;
    f2(a,b);
    //f1(c,d);
    a = 1 , b = 1;
    c = true, d= true;
    //f1(c,d);
    f2(a,b);
    int e=1,f=0;
    cout << "1 | 0 = " << (e|f) << endl;
    cout << "1 bitor 0 = " << (e bitor f) << endl;
}
