#include "ex01.h"
#include <iostream>
using namespace std;

int main(){
    f1();
    int a = f2(1,2,3);
    cout << "f2 returned: " << a << endl;
    float b = f3(1.2,2.8);
    cout << "f3 returned: " << b << endl;
    char c = f4('d','b');
    cout << "f4 returned: " << c << endl;
}
