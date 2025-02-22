#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<arr[0]<<endl;
    cout<<"---------------"<<endl;
    cout<<(ptr+1)<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<arr[1]<<endl;
    cout<<"---------------"<<endl;
    cout<<(ptr+3)<<endl;
    cout<<*(ptr+3)<<endl;
    cout<<arr[3]<<endl;
    cout<<"---------------"<<endl;
    ptr++;
    ++ptr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}