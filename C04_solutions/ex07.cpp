#include "CppLib.h"
#include "iostream"
using namespace std;

int main(){
    Stash dStash;
    dStash.initialize(sizeof(double));
    for (int i=0 ; i<25 ; i++){
        double value = 1/static_cast<double>(i);
        double* dp = &value;
        dStash.add(dp);
    }
    cout << "elements in dStash = " << dStash.count() << endl;
    for (int i=0 ; i < dStash.count() ; i++){
        cout << *(reinterpret_cast<double*>(dStash.fetch(i))) << endl;
    }
    cout << "elements in dStash = " << dStash.count() << endl;

    dStash.cleanup();
    int elems = dStash.count();
    cout << "elements in dStash = " << elems << endl;
    cout << "elements in dStash = " << dStash.count() << endl;
    for (int i=0 ; i < dStash.count() ; i++){
        cout << *(reinterpret_cast<double*>(dStash.fetch(i))) << endl;
    }
    cout << "elements in dStash = " << dStash.count() << endl;


}
