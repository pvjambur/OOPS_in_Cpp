#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }
};

class Student{
    public:
    string name;
    int rollNo;
};

int main(){
    Teacher t1;
    t1.name = "Pranav";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(50000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
    return 0;
}
