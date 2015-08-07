#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc,char* argv[]){
    if ( argc != 2 ){
        cout << "You must give integer argument!" << endl ;
        return 0;
    }
    char* cdigit = argv[1];
    int digit = atoi(cdigit);
    cout << digit << endl;
    bool isPrime = true;
    for (int i=2 ; i <= digit/2 ; i++){
        if ( digit%i == 0 ){
            isPrime = false;
            cout << "Digit " << digit << " is not prime number" << endl;
            cout << "It can be devided by " << i << " resulting in " <<
                 digit/i << endl;
            break;
        }
        else {
            if (i == digit/2)
                cout << "Number " << digit << " is the PRIME NUMBER!!!" << endl;
        }
    }



}


