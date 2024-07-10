#include<iostream>
using namespace std;

/*
int main(){
    int arr[] = {2, 4, 10, 9, 12};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            cout<<"Assign value "<<arr[i]<<" to max"<<endl;
        }
    } 
    cout<<"Maximum: "<<max;
}
*/


int main(){
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter array from user: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest value of Array: "<<max;
}