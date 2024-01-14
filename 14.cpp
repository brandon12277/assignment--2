#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;

public:
    Person(const string& n) : name(n) {}

    void display() const {
        cout << "Name: " << name << endl;
    }
};

class Employee : virtual public Person {
protected:
    int empId;

public:
    Employee(const string& n, int id) : Person(n), empId(id) {}

    void display() const {
        Person::display();
        cout << "Employee ID: " << empId << endl;
    }
};

class Student : virtual public Person {
protected:
    int studentId;

public:
    Student(const string& n, int id) : Person(n), studentId(id) {}

    void display() const {
        Person::display();
        cout << "Student ID: " << studentId << endl;
    }
};

class Manager : public Employee, public Student {
public:
    Manager(const string& n, int empId, int studentId) 
        : Person(n), Employee(n, empId), Student(n, studentId) {}

    void display() const {
        Person::display();
        cout << "Employee ID: " << Employee::empId << ", Student ID: " << Student::studentId << endl;
    }
};

int main() {
    Manager manager("John", 101, 501);
    manager.display();

    return 0;
}
