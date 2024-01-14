#include <iostream>
#include <string>

using namespace std;


class Employee {
public:
    int id;
    string name;
    double salary;

   
    Employee(int id, string name, double salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
};

int main() {
    
    const int SIZE = 5; 
    Employee employees[SIZE] = {
        Employee(1, "John", 55000.0),
        Employee(2, "Jane", 48000.0),
        Employee(3, "Doe", 52000.0),
        Employee(4, "Smith", 49000.0),
        Employee(5, "Alice", 60000.0)
    };

   
    cout << "Salaries above 50,000:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        if (employees[i].salary > 50000.0) {
            cout << "ID: " << employees[i].id << ", NAME: " << employees[i].name << endl;
        }
    }

    return 0;
}
