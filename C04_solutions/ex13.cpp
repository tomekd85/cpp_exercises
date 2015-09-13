#include <iostream>
#include <string>
using namespace std;

struct Video{
    string title;
    string year;
    int total;
    int available;
    void rent();
    void give_back();
    void buy(int how_many);
    void sell(int how_many);
    void print();
};

struct rental{
    Video storage[100];
    void add(string title,string year,int how_many);
    void remove(string title,int how_many);
    void rent(string title);
    void give_back(string title);
    int find(string title);
    int next;
    void list();
};


void Video::rent(){
    available-=1;
}

void Video::give_back(){
    available+=1;
}

void Video::buy(int how_many){
    total+=how_many;
    available+=how_many;
}

void Video::sell(int how_many){
    total-=how_many;
    available-=how_many;
}

void Video::print(){
    cout << "Title: " << title << endl;
    cout << "Year: " << year << endl;
    cout << "Available: " << available << endl;
    cout << "Total: " << total << endl;
}

void rental::add(string title,string year,int how_many){
    int index = find(title);
//    cout << index << endl ;
    if (index == -1){
        storage[next]=*(new Video);
        storage[next].title = title;
        storage[next].year = year;
        storage[next].buy(how_many);
        next++;
    }
    else
        storage[index].buy(how_many);
}

int rental::find(string title){
    for (int i=0 ; i < next; i++){
//        cout << storage[i].title << endl;
        if (storage[i].title == title)
            return i ;
    }
    return -1;
}

void rental::remove(string title,int how_many){
    int index = find(title);
//    cout << index << endl;
    if (index == -1)
        cout << "There is no such movie in rental store!" << endl ;
    else
        storage[index].sell(how_many);
}

void rental::rent(string title){
    int index = find(title);
//    cout << index << endl;
    if (index == -1)
        cout << "There is no such movie in rental store!" << endl ;
    else
        storage[index].rent();
}

void rental::give_back(string title){
    int index = find(title);
//    cout << index << endl;
    if (index == -1)
        cout << "There is no such movie in rental store!" << endl ;
    else
        storage[index].give_back();
}

void rental::list(){
    for (int i=0 ; i < next ; i++){
        storage[i].print();
        cout << endl ;
    }
}
/*
void test(){
    rental wyp;
    wyp.next=0;
    wyp.add("Incepcja","2009",2);
    wyp.add("Gone in 60 seconds","1997",10);
    
    wyp.rent("Incepcja");
    wyp.add("Gone in 60 seconds","1997",3);
    wyp.rent("Gone in 60 seconds");
    wyp.list();

}

int main(){
    test();
}
*/
