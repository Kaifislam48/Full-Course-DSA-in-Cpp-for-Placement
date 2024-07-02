#include<iostream>
using namespace std;

int main(){
    int n, ReverseDigit;
    cout<<"Enter the Digit Number: ";
    cin>>n;

    while(n>0){
        ReverseDigit = n%10;
        cout<<ReverseDigit<<" ";
        n = n/10;
    }
}