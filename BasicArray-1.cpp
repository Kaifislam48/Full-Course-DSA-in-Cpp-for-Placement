#include<iostream>
using namespace std;

int main(){
    int arr[5]={2, 4, 6, 7, 9};
    cout<<"Access by Index: ";
    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";              //Access by index
    cout<<arr[3]<<" ";
    cout<<arr[4]<<" ";
    cout<<endl;

    cout<<"Access by Loop: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";          //Access by Loop;
    }
    return 0;
}