#include<iostream>
using namespace std;

/*void reverseArray(int arr[], int n){
    cout<<"Reverse Array:- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter size array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array Element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int copyArr[n];
    for(int i=0; i<n; i++){
        int j = n-i-1;
        copyArr[i]=arr[j];
    }

    for(int i=0; i<n; i++){
        arr[i]=copyArr[i];
    }
    
    reverseArray(arr, n);               //Time Complexity:---O(n)
}*/

void reverseArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int start=0; int end=n-1;
        while(start < end){
            /*
            int temp = arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            */
            swap(arr[start], arr[end]);
            start++;
            end--;
    }
    reverseArray(arr, n);
}