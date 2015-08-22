#include <iostream>
using namespace std;

int main(){

    enum colors {
        white=0,
        black,
        yellow,
        orange,
        red,
        purple,
        blue,
        green,
        pink
    };


    for (int i = white ; i <= pink ; i++){
        colors color = static_cast<colors>(i);
        cout << color << endl;
    }


    int a = green;
    cout << a << endl;
}

