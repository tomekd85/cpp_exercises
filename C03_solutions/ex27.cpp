#include <iostream>
using namespace std;

int main(){
    const double cd[5]= {1,2,3,4,5};
    volatile double vd[5] = {6,7,8,9,0};
    double* dp;
    //double* dp = const_cast<double*>(cd);
    cout << "cd[]" << endl ;
    for (int i=0 ; i <5 ; i++){
        cout << cd[i] << endl;
    }
    for (int i =0 ; i < 5 ; i++){
       *(const_cast<double*>(&cd[i])) = i/100.0;
        //*(dp+i) = i/100.0;
    }
    cout << "cd[]" << endl ;
    for (int i=0 ; i <5 ; i++){
        cout << *(&cd[i]) << endl;
    }
    //dp = const_cast<double*>(vd);
    for (int i =0 ; i < 5 ; i++){
        *(const_cast<double*>(&vd[i])) = i/10.0;
    }
    cout << "vd[]" << endl;
    for (int i=0 ; i <5 ; i++){
        cout << vd[i] << endl;
    }

}
