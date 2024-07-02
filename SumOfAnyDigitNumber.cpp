#include<iostream>
using namespace std;

int main(){
    int n, lastDigit;
    cout<<"Enter any digit number: ";
    cin>>n;

    int DigitSum=0;
    while(n>0){
        lastDigit=n%10;
        cout<<lastDigit<<" ";
        DigitSum += lastDigit;
        n = n/10;
    }
    cout<<endl;
    cout<<DigitSum<<endl;
}