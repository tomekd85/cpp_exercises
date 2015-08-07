#include<iostream>
#include<cstdlib>
#include<climits>

using namespace std;

int main(int argc,char* argv[]){

    int check_size = 10;

    for (int digit = 1 ; digit < check_size ; digit++)
        for (int i=2 ; i <= digit/2 ; i++){
            if ( digit%i == 0 ){
                //cout << "Digit " << digit << " is not prime number" << endl;
                //cout << "It can be devided by " << i << " resulting in " <<
                //    digit/i << endl;
                break;
            }
            else {
                if (i == digit/2)
                    cout << "Number " << digit << " is the PRIME NUMBER!!!" << endl;
            }
        }



}


