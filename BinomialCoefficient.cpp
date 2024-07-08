#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=0; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int binCoff(int n, int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int binCoff = val1 / (val2 * val3);
}

int main(){
    int n, r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;

    cout<<"Binomial Coefficient is "<<binCoff(n, r);
    return 0;
}