#include <iostream>
using namespace std;

class C1{
    public:
        void fpublic();
        int a;
    private:
        void fprivate();
        int b;
    protected:
        void fprotected();
        int c;
};

void C1::fpublic(){
    cout << "In public" << endl ;
}

void C1::fprivate(){
    cout << "In private" << endl ;
}

void C1::fprotected(){
    cout << "In protected" << endl;
}

int main(){
    C1 C1object;
    C1object.a = 10;
    C1object.b = 20;
    C1object.c = 30;

    C1object.fpublic();
    C1object.fprivate();
    C1object.fprotected();
}
