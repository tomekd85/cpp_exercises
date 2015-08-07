#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc,char* argv[]){
    if ( argc != 2 ){
        cout << "You must give integer argument:" << endl ;
        return 0;
    }
    char* cdigit = argv[1];
    int digit = atoi(cdigit);
    cout << digit << endl;


}


