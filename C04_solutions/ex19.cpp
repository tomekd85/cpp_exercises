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

int main(){
    exterior e;
    e.ei = 1001;
    e.ec = 'e' ;
    e.printStruct();

    e.inter->ii = -12;
    e.inter->ic = 'i' ;
    e.inter->printStruct();
    e.printStruct();
}

