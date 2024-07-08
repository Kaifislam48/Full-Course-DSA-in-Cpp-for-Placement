#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<(a+b)<<endl;
    return a+b;
}

double sum(double a, double b){
    cout<<(a+b)<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<(a+b+c)<<endl;;
    return a+b+c;
}

int main(){
    int x, y, z;
    cout<<"Enter value x: ";
    cin>>x;
    cout<<"Enter value y: ";
    cin>>y;
    cout<<"Enter value z: ";
    cin>>z;
    sum(x, y);
    sum(x, y, z);

    return 0;
}