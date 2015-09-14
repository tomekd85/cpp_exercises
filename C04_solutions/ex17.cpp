#include <iostream>
using namespace std;

int main(){
    int* i = new int;
    long* l = new long;
    char* c = new char[100];
    float* f = new float[100];

    cout << "&i : " << (long)i << endl ;
    cout << "&l : " << (long)l << endl ;
    cout << "&c : " << (long)c << endl ;
    cout << "&f : " << (long)f << endl ;

    delete i;
    delete l;
    delete []c;
    delete []f;
}

