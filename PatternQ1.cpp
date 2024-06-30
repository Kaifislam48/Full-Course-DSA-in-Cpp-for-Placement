#include <iostream>
using namespace std;

int main(){
    int i, j, n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout<<"*";          // Print the Square pattern using loop.
        }
        cout<<endl;
    }
}