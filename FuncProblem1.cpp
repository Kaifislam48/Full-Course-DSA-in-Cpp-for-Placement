#include<iostream>
using namespace std;

int Sum(int a, int b){
    int sum = a + b;
    return sum;
}

int Difference(int a, int b){
    int difference = a - b;
    return difference;
}

int Product(int a, int b){
    int product = a * b;
    return product;
}

int Quotient(int a, int b){
    int quotient = a / b;
    return quotient;
}

int Remainder(int a, int b){
    int remainder = a % b;
    return remainder;
}

int main(){
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "The sum of " << a << " and " << b << " is " << Sum(a, b) << endl;
    cout << "The difference of " << a << " and " << b << " is " << Difference(a, b) << endl;
    cout << "The product of " << a << " and " << b << " is " << Product(a, b) << endl;
    cout << "The quotient of " << a << " and " << b << " is " << Quotient(a, b) << endl;
    cout << "The remainder of " << b << " and " << b << " is " << Remainder(a, b) << endl;
}