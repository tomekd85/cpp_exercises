#include <iostream>
#include <string>
using namespace std;

struct s1{
    int a;
    void f1();
};

void s1::f1(){
    cout << a << endl ;
}

int main(){
    s1 s;
    s.a = 19;
    s.f1();
}
