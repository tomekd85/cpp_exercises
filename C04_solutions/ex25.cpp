#include <iostream>
using namespace std;

struct nested{
    int elem_num;
    nested* next;
    void make_nested(int length);
    void print_nested();
};

void nested::make_nested(int length){
    nested* elem = this;
    for (int i =0; i < length ; i++){
        elem->next = new nested;
        elem->elem_num=i;
        elem = elem->next;
    }
    elem->next = 0;
}

void nested::print_nested(){
    nested* temp = this;
    while (temp->next != 0){
        cout << "nested["<< temp->elem_num << "] = "<< (long)temp->next << endl;
        temp = temp->next;
    }
}

int main(){
    nested a;
    a.make_nested(20);
    a.print_nested();
}
