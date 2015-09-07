#include <iostream>
using namespace std;

struct sint{
    int number ;
    void change_number(int);
    void display_number();
};

void sint::change_number(int value){
    number = value;
}

void sint::display_number(){
    cout << "struct number = " << number << endl;
}

int main(){
    sint a;
    a.number = 10;
    a.display_number();
    a.change_number(22);
    a.display_number();
}
