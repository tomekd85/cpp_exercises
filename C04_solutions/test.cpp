#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "abcdef";
    char* cp = (char*)s.c_str();
    cout << cp << endl;
    cout << *cp << endl;
}
