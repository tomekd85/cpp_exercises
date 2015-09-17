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
    int i = 0;
    int a = 80;
    int counter = 0 ;
    char* temp;
    string line;
    Stash* s;
    while(getline(in,line)){
        if (counter == 0){
            s = new Stash;
            s->initialize(sizeof(char) * 80);
        }
        s->add(line.c_str());
        //cout << line << endl;
        cout << counter << endl ;
        counter++;
        if (counter == 5){
            i = 0;
            while((temp = (char*)s->fetch(i++)) != 0){
                cout << temp << endl;
            }
            fiveliners.push(s);
            counter = 0;
        }
    }

    Stack reverted;
    reverted.initialize();
    void* copy;
    while(copy = fiveliners.pop())
        reverted.push(copy);
    while (copy = reverted.pop()){
        s = reinterpret_cast<Stash*>(copy);
        i = 0;
        while((temp= (char*)s->fetch(i++)) != 0){
            cout << temp << endl;
        }
    }
}

