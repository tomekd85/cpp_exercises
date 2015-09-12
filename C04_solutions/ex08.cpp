#include "Stack.h"
#include <iostream>
using namespace std;

int main(){
    Stack st;
    st.initialize();
    double d;
    double* dd;
    for (int i = 0 ; i < 25 ; i++){
        double* temp = new double(1/static_cast<double>(i));
        st.push(temp);
    }

    for (int i = 0 ; i <25 ; i++){
        dd = reinterpret_cast<double*>((st.pop()));
        cout << "stack.pop() = " << *dd << endl;
        //delete dd;
    }
}
