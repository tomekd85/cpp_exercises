#include <iostream>
using namespace std;
void printArray(int array[] ,int size){
    for (int i =0 ; i < size ; i++)
        cout << array[i] << ", " ;
    cout << endl ;
}

int main(){
    int a[10], b[10], e[10];
    int d = 10000;
    int x = 10000;
    char c = 'd';

    cout << "&a : " << (long)&a << endl;
    cout << "&b : " << (long)&b << endl;
    cout << "&e : " << (void*)&e << endl;
    cout << "&c : " << (void*)&c << endl;
    cout << "&x : " << (long)&x << endl;

    for (int i=0; i < 30 ; i++)
        a[i] = i;

    printArray(a,10);
    printArray(b,10);
    printArray(e,10);

}
