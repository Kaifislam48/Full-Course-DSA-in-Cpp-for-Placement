#include<iostream>
using namespace std;

void subArray(int *arr, int n){
    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            //cout<<"("<<st<<","<<end<<")"<<" ";
            for(int i=st; i<=end; i++){
                cout<<arr[i];
            }
            cout<<", ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    subArray(arr, n);

}