#include <iostream>
using namespace std;

int f1(double a){
    int b = static_cast<int>(a) + 10;
    return b;
}

int main(){
    int (*pf)(double);
    double a = 1.12345;
    pf = &f1;
    int b = (*pf)(a);
    cout << b << endl;
}
