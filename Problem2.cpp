#include<iostream>
using namespace std;

int main(){
    int n, i, sum;
    sum = 0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (i = 1; i<=n; i++){
        sum += i;       // this means sum = sum + i
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Sum is: "<<sum;          // Printing Sum of N natural number
}