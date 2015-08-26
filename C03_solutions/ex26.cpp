#include <iostream>
using namespace std;

void func(void* vp, int bytes_count, unsigned char value){
    for (int i = 0 ; i < bytes_count ; i++)
        *((unsigned char*)vp+i) = value;
}

void print_int_table(int* table, int size){
    for (int i =0 ; i < size ; i++){
        cout << "table[" << i << "] = " << table[i] << endl;
    }
}

int main(){
    int bytes_count = 8;
    unsigned char value = '1';
    int len = 10 ;
    int table[len] ;
    for (int i = 0 ; i < len ; i++)
        table[i] = 0 ;
    print_int_table(table,len);

    void* vp = (void*)table;
    func(vp,bytes_count,value);
    print_int_table(table,len);
}
