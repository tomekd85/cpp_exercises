#include <iostream>
#include <string>

using namespace std;

int main(){
    string word ;
    int selector ;
    while (true) {
        selector = -1 ;
        cin >> word ;
        if (word == "Tomek")
            selector = 1;
        if (word == "exit")
            break;
        if (word == "Iza")
            selector = 2;
        if (word == "Kasia")
            selector = 3;

//        cout << "selector = " << selector << endl ;
//        cout << "word = " << word << endl ;
        switch (selector) {
            case 1 : cout << "Nice to meet you Tomek" << endl ;
                     break;
            case 2 : cout << "Congratulations! You have a daugther" << endl ;
                     break ;
            case 3 : cout << "You are the best !" << endl;
                     break ;
            default : cout << "Not defined, try something different" << endl ;
                     break;
        }
    }
}

