#include<iostream>
using namespace std;

void func1(int arr[]){
    arr[0]=1000;
}

//              --- Both functions are same!

void func2(int *arr){
    *arr=1000;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout<<"Size of Array = "<<sizeof(arr)<<endl;

    //cout<<*arr<<endl; == arr[0]
    //cout<<*(arr+1)<<endl; == arr[1]
    //cout<<*(arr+2)<<endl;  ==arr[2]
    //cout<<*(arr+3)<<endl;   ==arr[3]

    //func1(arr);
    //func2(arr);
    //cout<<arr[0]<<endl;     //When calling func1 and func2 then use it!
    //cout<<arr[0];

    printArray(arr, n);

}