#include <iostream>
#include <string>
using namespace std;

int main(){
    int X,Y,Z,A1,A2;
    string sA1,sA2;
    cout << "Podaj X: " ;
    cin >> X;
    cout << "Podaj Y: " ;
    cin >> Y ;
    cout << "Podaj Z: " ;
    cin >> Z ;
    sA1 = "X + Y - 2/2 + Z = ";
    A1 = X + Y - 2/2 + Z ;
    sA2 = "X + (Y - 2)/(2 + Z) = ";
    A2 = X + (Y - 2)/(2 + Z);
    cout << sA1 << A1 << endl ;
    cout << sA2 << A2 << endl ;
}

