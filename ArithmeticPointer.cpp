#include<iostream>
using namespace std;

    /*int a = 5;
    int *ptr = &a;
    cout<<ptr<<"   "<<*ptr<<endl;
    ptr++;
    cout<<ptr<<"   "<<*ptr<<endl;

    ptr--;
    cout<<ptr<<"   "<<*ptr<<endl;


    ptr = ptr + 3;
    cout<<ptr<<"   "<<*ptr;*/

    void printArray(int *ptr, int n){
        for(int i=0; i<n; i++){
            cout<<ptr<<"  "<<*ptr<<endl;
            ptr = ptr + 1;
            *ptr=*ptr+1;
        }
    }

    int main(){
        int arr[] = {1, 2, 3, 4, 5};
        int n = sizeof(arr)/sizeof(int);
        printArray(arr, n);

}