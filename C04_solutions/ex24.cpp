#include <iostream>
using namespace std;

struct nested{
    int elem_num;
    nested* next;
};

void make_nested(nested* first, int length){
    nested* elem = first;
    for (int i =0; i < length ; i++){
        elem->next = new nested;
        elem->elem_num=i;
        elem = elem->next;
    }
    elem->next = 0;
}

void print_nested(nested* first){
    nested* temp = first;
    while (temp->next != 0){
        cout << "nested["<< temp->elem_num << "] = "<< (long)temp->next << endl;
        temp = temp->next;
    }
}

int main(){
    nested a;
    make_nested(&a,20);
    print_nested(&a);
}
