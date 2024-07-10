#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter length Array: ";
    cin>>n;
    int arr[n];

    cout<<"Array Input from User: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int min=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum Value of array is "<<min;
}