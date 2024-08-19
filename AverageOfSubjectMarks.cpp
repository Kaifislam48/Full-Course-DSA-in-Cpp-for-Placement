#include<iostream>
using namespace std;

int main(){
    int sci, ss, math, eng, hindi;
    cout<<"Enter marks of Science: ";
    cin>>sci;
    cout<<"Enter marks of Social Science: ";
    cin>>ss;
    cout<<"Enter marks of Mathematics: ";
    cin>>math;
    cout<<"Enter marks of English:";
    cin>>eng;
    cout<<"Enter marks of Hindi: ";
    cin>>hindi;
    int average = (sci+ss+math+eng+hindi)/5;
    cout<<"Average of 5 subject is "<<average<<endl;
}