#include <iostream>
using namespace std;

struct exterior{
    struct interior{
        int ii;
        char ic;
        void setElements(int i,char c);
        void printStruct();
    }* inter;
    int ei;
    char ec;
    void setElements(int i, char c);
    void printStruct();
};

void exterior::interior::setElements(int i, char c){
    ii = i;
    ic = c;
}

void exterior::interior::printStruct(){
    cout << "int i = " << ii << endl ;
    cout << "char c = " << ic << endl ;
}


void exterior::setElements(int i,char c){
    ei = i;
    ec = c;
}

void exterior::printStruct(){
    cout << "exterior int i = " << ei << endl ;
    cout << "exterior char c = " << ec << endl ;
    cout << "interior int i = " << inter->ii << endl ;
    cout << "interior char c = " << inter->ic << endl ;
}


struct dataOnly{
    int i;
    char c;
};

struct data_and_function{
    int i;
    char c;
    int f(int i,char c);
};

int data_and_function::f(int ii,char cc){
    i = ii;
    c = cc;
}

struct empty{
};



int main(){
    cout << "sizeof(dataOnly) = " << sizeof(dataOnly) << endl;
    cout << "sizeof(data_and_function) = " << sizeof(data_and_function) << endl;
    cout << "sizeof(empty) = " << sizeof(empty) << endl;
    cout << "sizeof(exterior) = " << sizeof(exterior) << endl;
    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;

}

