#include <iostream>
using namespace std;

union u1{
    int i;
    char c;
    float f;
    double d;
};

enum e1{
    stol,
    krzeslo,
    biurko,
    sluchawki,
    ksiazka,
    glosniki,
    dlugopis,
    olowek
};

int main(){
    u1 unia;
    e1 enumek;
    unia.i = 100;
    cout << unia.i << endl;
    unia.i = sluchawki;
    cout << unia.i << endl;
}
