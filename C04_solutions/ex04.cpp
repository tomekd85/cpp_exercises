#include <iostream>
using namespace std;

struct sint{
    int number ;
};

void change_number(sint* sp, int value){
    sp->number = value;
}

void display_number(sint* sp){
    cout << "struct number = " << sp->number << endl;
}

int main(){
    sint a;
    a.number = 10;
    display_number(&a);
    change_number(&a,22);
    display_number(&a);
}
