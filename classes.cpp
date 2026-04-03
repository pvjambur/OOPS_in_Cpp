#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;

public:
Teacher(string n, string d, string s, double sal){
    name = n;
    dept = d;
    subject = s;
salary = sal;

}
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
    Teacher t1("pranav", "CSE", "DSA", 50000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
    return 0;
}
