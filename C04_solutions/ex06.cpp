#include <iostream>
using namespace std;

struct sint{
    int number ;
    void change_number(int);
    void display_number();
    void show_value();
};

void sint::change_number(int value){
    this->number = value;
}

void sint::display_number(){
    cout << "struct number = " ;
    this->show_value();
    cout << endl;
}
void sint::show_value(){
    cout << this->number ;
}

int main(){
    sint a;
    a.number = 10;
    a.display_number();
    a.change_number(22);
    a.display_number();
}
