#include<iostream>
#include<climits>
using namespace std;

void kadaneAlgorithm(int *arr, int n){          //Time Complexity is O(n)!
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"Maximum of Sub Array Sum is: "<<maxSum;
}

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter Array Element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    kadaneAlgorithm(arr, n);
}