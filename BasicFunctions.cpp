#include <iostream>
using namespace std;

void GoodMorning(){
    cout<<"Good Morning Everyone"<<endl;
}

void Assistant(){
    GoodMorning();
    cout<<"Work is Done Everyone!"<<endl;
}
int main(){
    Assistant();
    cout<<"We are here for Doing Something!"<<endl<<"Thankyou!!";
    return 0;
}