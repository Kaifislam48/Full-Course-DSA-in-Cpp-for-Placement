#include<iostream>
#include<climits>
using namespace std;

void maxOfSubArraySum2(int *arr, int n){            // Time Complexity for this code is O(n square)!
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
        int CurrSum = 0;
        for(int end=start; end<n; end++){
            CurrSum += arr[end];
            maxSum = max(maxSum, CurrSum);
        }
    }
    cout<<"Maximum of Sub Array Sum is: "<<maxSum;
}

int main(){
int n;
cout<<"Enter size of array: ";
cin>>n;

int arr[n];
cout<<"Enter Array Element: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
    }

    maxOfSubArraySum2(arr, n);
}
