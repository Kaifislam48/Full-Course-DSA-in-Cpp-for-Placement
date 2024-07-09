#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    int arr[n];

    cout<<"Taking Input Array from User: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Print All Array Value: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}