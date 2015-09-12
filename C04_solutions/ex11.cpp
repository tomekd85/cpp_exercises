#include <iostream>
using namespace std;

int main(){
#ifdef FLAG
    cout << "Flag is defined. " << endl;
#endif
#ifndef FLAG
    cout << "Flag is not defined" << endl;
#endif
}

