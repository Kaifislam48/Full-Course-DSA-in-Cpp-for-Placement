#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int SumOfOddDigit = 0;

    while(n>0){
        int lastDigit = n%10;
        if(lastDigit%2!=0){
            SumOfOddDigit += lastDigit;
        }
        n/=10;
    }
    cout<<"Sum of Odd Digit Number is: "<<SumOfOddDigit;
}