#include <iostream>
using namespace std;

char* copyChar(char* str){
    int size = sizeof(str)/sizeof(char);
    //cout << "size = " << size << endl ;
    char * copy = new char[size];
    for (int i = 0 ; i < size ; i++)
        copy[i] = str[i];
    return copy;
}

int sizeofArr(char* arr){
    return (sizeof(arr)/sizeof(char));
}

void printArr(char* arr){
    int size = sizeofArr(arr);
    for (int i =0 ; i < size ; i++)
        cout << arr[i] ;
}

int main(){
    char a[] = "abcdefg";
    char* b = copyChar(a);
    cout << (long)b << endl ;
    printArr(b);
    cout << endl ;
    char* c = copyChar(b);
    cout << (long)c << endl ;
    printArr(c);
    cout << endl;
}

