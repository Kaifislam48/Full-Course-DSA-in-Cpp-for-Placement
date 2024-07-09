#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    int **pptr = &ptr;
    cout<<a<<endl<<&a<<endl<<ptr<<endl<<*ptr<<endl<<&ptr<<endl<<pptr<<endl<<*pptr<<endl<<**pptr<<endl;

    return 0;
}