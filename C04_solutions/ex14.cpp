#include "Stack.h"
#include "ex13.cpp"
#include <iostream>
using namespace std;

int main(){
    Stack ren;
    ren.initialize();

    Video* v1 = new Video;
    v1->title = "Gone in 60 seconds";
    v1->year = "1999";
    v1->available = 10;
    v1->total = 10;

    ren.push(v1);

    Video* v2 = new Video;
    v2->title = "Incepcja";
    v2->year = "2006";
    v2->available = 3;
    v2->total = 3;

    ren.push(v2);

    Video* v;
    while(v = reinterpret_cast<Video*>(ren.pop())){
        v->print();
        cout << endl;
    }
}




