#include<iostream>
using namespace std;

/*

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
        }

}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<factorial(n);
}

*/

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<factorial(n);
}