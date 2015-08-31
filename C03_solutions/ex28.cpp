#include <iostream>
#include "printBinary.h"
using namespace std;


void printArray(double* table,int size){
    for (int i=0; i < size ; i++)
        cout << "table[" << i << "] : " << *(table + i) << endl ;
}

int main(){
    double array[10] = {0,0,0,0,0,0,0,0,0,0};
    printArray(array,10);
    unsigned char* uc = reinterpret_cast<unsigned char*>(&array);
    for (int i = 0 ; i < sizeof(double) * 10 ; i++)
        *(uc+i) = char(1);
    printArray(array,10);
    for (int i = 0 ; i < 10 ; i++){
        for (int j = sizeof(double) -1 ; j >=0 ; j--){
            printBinary(*(uc+((sizeof(double)*i)+j)));
            cout << " " ;
        }
        cout << endl ;
    }
}
