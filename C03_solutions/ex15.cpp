#include <string>
#include <iostream>
using namespace std;

struct str1 {
    string a;
    string b;
    int i;
} ;

typedef struct str2{
    string a = "str2";
    string b = "str2";
    int i = 100;
} str2 ;

int main(){
    struct str1 s1;
    s1.a = "abc";
    s1.b = "def";
    s1.i = 10;
    str2 s2;
    s2.a = "s2 struct";
    s2.b = "comment";
    //s2.i = 123;


    struct str1* pstr1;
    str2* pstr2;

    cout << s1.a << endl ;
    cout << s1.b << endl ;
    cout << s1.i << endl ;

    cout << (long)&s1 << endl;
    pstr1 = &s1;
    pstr2 = &s2;

    pstr1->a += "d";
    pstr2->b += "g";

    cout << s1.a << endl ;
    cout << s1.b << endl ;
    cout << s1.i << endl ;

    cout << s2.a << endl ;
    cout << s2.b << endl ;
    cout << s2.i << endl ;



}
