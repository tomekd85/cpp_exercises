#include <iostream>
#include <string>
using namespace std;

void f1(string& s){
    s+="1";
}

void f2(string* s){
    *s+="2";
}

int main(){
    string s = "abcdef";
    cout << "s = " << s << endl ;
    f1(s);
    cout << "s = " << s << endl ;
    f2(&s);
    cout << "s = " << s << endl ;
}
