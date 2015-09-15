#include <iostream>
#include "Stack.h"
#include "CppLib.h"
#include <string>
#include <fstream>
using namespace std;

int main(){

    int num_of_lines = 5;
    Stack fiveliners;
    fiveliners.initialize();
    ifstream in("ex22.cpp");
    int a = 80;
    int counter = 0 ;
    string line;
    Stash* s;
    while(getline(in,line)){
        if (counter == 0){
            s = new Stash;
            s->initialize(sizeof(char) * 80);
        }

        s->add(line.c_str());
        counter++;
        cout << counter << endl ;
        if (counter == 5){
            for (int i = 0; i < s->count() ; i++){
                cout << *(char*)s->fetch(i);
            }
            fiveliners.push(s);
            counter = 0;
        }
    }

    Stack reverted;
    reverted.initialize();
    void* copy;
    char* temp;
    while(copy = fiveliners.pop())
        reverted.push(copy);
    while (copy = reverted.pop()){
        s = reinterpret_cast<Stash*>(copy);
        for (int i=0 ; i < s->count() ; i++){
            temp = reinterpret_cast<char*>(s->fetch(i));
            //cout << *temp ;
        }
    }
}

