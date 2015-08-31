#include <iostream>
#include "printBinary.h"
using namespace std;

void func(void* vp, int bytes_count, unsigned char value){
    // assigns byte value to each of the bytes in the table
    for (int i = 0 ; i < bytes_count ; i++)
        *((unsigned char*)vp+i) = value;
}
void printBinaryInt(int number){
    unsigned char* ucp = reinterpret_cast<unsigned char*>(&number);
    for (int i = sizeof(int)-1 ; i >= 0 ; i--){
        cout << " " ;
        printBinary(*(ucp+i));
#ifdef DEBUG
        cout << " Debugging stuff here for "<< i << " octet" << endl ;
#endif
    }
}
void print_int_table(int* table, int size){
    for (int i =0 ; i < size ; i++){
        cout << "table[" << i << "] = " << table[i] << endl;
        printBinaryInt(table[i]);
        cout << endl;
    }
}


int main(){
    int bytes_count = 10;
    unsigned char value = char(1);
    int len = 10 ;
    int table[len] ;
    //Initialize table with zeros
    for (int i = 0 ; i < len ; i++)
        table[i] = 0 ;
    print_int_table(table,len);

    void* vp = (void*)table;
    func(vp,bytes_count,value);
    print_int_table(table,len);
}
