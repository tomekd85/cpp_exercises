#include <iostream>
#include <cstdlib>
#include "printBinary.h"
using namespace std;

int main(int argc, char* argv[]){
    float a = atof(argv[1]);
    unsigned char* puc = reinterpret_cast<unsigned char*>(&a) ;

    for (int i=0; i<sizeof(float); i++){
        printBinary(*(puc+i));
        cout << " " ;
    }

    cout << endl;
}
