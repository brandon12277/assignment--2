#include <iostream>
#include <string>

using namespace std;


class Student {
protected:
    string name;
    int rollNumber;

public:
    virtual void displayDetails() = 0;
};

class Engineering : public Student {
private:
    string branch;

public:
    Engineering(string n, int roll, string b) : branch(b) {
        name = n;
        rollNumber = roll;
    }

    void displayDetails(){
        cout << "Engineering Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Branch: " << branch << endl;
        cout << endl;
    }
};

class Medicine : public Student {
private:
    string specialization;

public:
    Medicine(string n, int roll, string s) : specialization(s) {
        name = n;
        rollNumber = roll;
    }

    void displayDetails(){
        cout << "Medical Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Specialization: " << specialization << endl;
        cout << endl;
    }
};

class Science : public Student {
private:
    string field;

public:
    Science(string n, int roll, string f) : field(f) {
        name = n;
        rollNumber = roll;
    }

    void displayDetails(){
        cout << "Science Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Field: " << field << endl;
        cout << endl;
    }
};

int main() {
    const int numStudents = 3;
    Student* students[numStudents];

    students[0] = new Engineering("John Doe", 101, "Computer Science");
    students[1] = new Medicine("Alice Smith", 202, "Cardiology");
    students[2] = new Science("Bob Johnson", 303, "Physics");

    for (int i = 0; i < numStudents; ++i) {
        students[i]->displayDetails();
    }

    return 0;
}
