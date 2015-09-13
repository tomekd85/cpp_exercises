#include <cassert>
#include <iostream>
using namespace std;

int main(){
    assert(false);
    cout << "\tThis text appears after assert(false)\n \
        You must compile the code with defined NDEBUG \n\
        parameter to see this text" << endl;
}
