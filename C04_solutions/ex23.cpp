#include <iostream>
#include "Stack.h"
#include "CppLib.h"
#include <string>
#include <fstream>
using namespace std;

struct sofs{
    int counter;
    int num_of_lines;
    int line_length;
    int line_number;
    Stack fiveliners;
    Stash* s ;
    void initialize();
    void add(string line);
    char* get();

};

void sofs::initialize(){
    counter = 0 ;
    num_of_lines = 5 ;
    fiveliners.initialize();
    line_length = 80;
}

void sofs::add(string line){
    if (counter == 0){
        s = new Stash;
        s->initialize(sizeof(char) * line_length);
    }
    s->add(line.c_str());
//    cout << line << endl;
//    cout << counter << endl ;
    counter++;
    if (counter == 5){
        fiveliners.push(s);
        counter = 0;
    }
}


char* sofs::get(){
    void* stsh;
    char* temp;
//    cout << "get " << counter << endl ;
    if (counter == 0 ){
        if (stsh = fiveliners.pop()){
            counter = 4;
            s = reinterpret_cast<Stash*>(stsh);
            if ((temp = (char*)s->fetch(counter)) != 0 ){
                return temp;
            }
        }
        //else{
        //    return 0;
        //}
    }
    else{
//        cout << "get else loop" << endl;
        counter--;
        if ((temp = (char*)s->fetch(counter)) != 0 ){
//            cout << "True if " << endl ;
            return temp;
        }
        else{
            if (stsh = fiveliners.pop()){
                s = reinterpret_cast<Stash*>(stsh);
                if ((temp = (char*)s->fetch(counter)) != 0 ){
                    return temp;
                }
            }
        }
    }
}
//    int num_of_lines = 5;
//    Stack fiveliners;
//    fiveliners.initialize();
int main(){


    sofs sofs1;
    sofs1.initialize();
    ifstream in("ex23.cpp");
    //int i = 0;
    char* temp;
    string line;
    //Stash* s;

    while(getline(in,line)){
        sofs1.add(line);
    }

    while ((temp = sofs1.get())!= 0 )
        cout << temp << endl;
//    for (int i = 0 ; i<50 ; i++){
//        cout << sofs1.get() << endl;
//    }
}
