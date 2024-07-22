#include<iostream>
#include<climits>
using namespace std;                //Printing Maximum Sub Array Sum Using Brute force. It's Time Complexity is O(n cube)!

void maxSubArraySum(int *arr, int n){
    int maxSum = INT_MIN;
    int start = 0;
    int end = n-1;
    for(int start=0; start<=n-1; start++){
        for(int end=start; end<=n-1; end++){
            int currSum=0;
            for(int i=start; i<=end; i++){
                currSum += arr[i];
            }
            cout<<currSum<<" ";
            maxSum = max(maxSum, currSum);
        }
        cout<<endl;
    }
    cout<<"Maximum of SubArraySum: "<<maxSum;
}

int main(){
    int n;
    cout<<"Number of Array Element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    maxSubArraySum(arr, n);
}