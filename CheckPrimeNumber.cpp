#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    bool isPrime=true;

    for(int i=2; i<n; i++){       //for(int i=2; i<=sqrt(n); i++)
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<"Number is Prime!"<<endl;
    }
    else{
        cout<<"Number is not Prime!"<<endl;
    }
}

