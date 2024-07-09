#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    string name;                //Data Member or Properties or Attributes
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double s){               //Member Functions
         salary = s;
    }

    double getSalary(){
        return salary;
    }

};

int main(){
    Teacher t1;
    t1.name = "Kaif Islam";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(50000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
}