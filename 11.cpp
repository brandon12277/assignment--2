#include <iostream>
#include <string>
using namespace std;


class Marks {
protected:
    static int rollNumberCounter; 
    int rollNumber;
    string name;

public:
    Marks(string name) : name(name) {
        rollNumber = ++rollNumberCounter; 
    }

    void display() const {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }

    virtual void inputMarks() = 0;
};


int Marks::rollNumberCounter = 0;


class Physics : public Marks {
private:
    int physicsMarks;

public:
    Physics(string name) : Marks(name) {}

    void inputMarks(){
        cout << "Enter Physics marks for " << name << ": ";
        cin >> physicsMarks;
    }

    int getPhysicsMarks() const {
        return physicsMarks;
    }
};


class Chemistry : public Marks {
private:
    int chemistryMarks;

public:
    Chemistry(string name) : Marks(name) {}

    void inputMarks(){
        cout << "Enter Chemistry marks for " << name << ": ";
        cin >> chemistryMarks;
    }

    int getChemistryMarks() const {
        return chemistryMarks;
    }
};


class Mathematics : public Marks {
private:
    int mathMarks;

public:
    Mathematics(string name) : Marks(name) {}

    void inputMarks(){
        cout << "Enter Mathematics marks for " << name << ": ";
        cin >> mathMarks;
    }

    int getMathMarks() const {
        return mathMarks;
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Physics* physicsStudents[numStudents];
    Chemistry* chemistryStudents[numStudents];
    Mathematics* mathStudents[numStudents];

    
    for (int i = 0; i < numStudents; ++i) {
        string name;
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> name;

        physicsStudents[i] = new Physics(name);
        physicsStudents[i]->inputMarks();

        chemistryStudents[i] = new Chemistry(name);
        chemistryStudents[i]->inputMarks();

        mathStudents[i] = new Mathematics(name);
        mathStudents[i]->inputMarks();
    }

    
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nDetails of student " << i + 1 << ":\n";
        physicsStudents[i]->display();
        cout << "Physics Marks: " << physicsStudents[i]->getPhysicsMarks() << endl;

        chemistryStudents[i]->display();
        cout << "Chemistry Marks: " << chemistryStudents[i]->getChemistryMarks() << endl;

        mathStudents[i]->display();
        cout << "Mathematics Marks: " << mathStudents[i]->getMathMarks() << endl;
    }

    int totalPhysics = 0, totalChemistry = 0, totalMath = 0;
    for (int i = 0; i < numStudents; ++i) {
        totalPhysics += physicsStudents[i]->getPhysicsMarks();
        totalChemistry += chemistryStudents[i]->getChemistryMarks();
        totalMath += mathStudents[i]->getMathMarks();
    }

    cout << "\nAverage Physics Marks: " << static_cast<double>(totalPhysics) / numStudents << endl;
    cout << "Average Chemistry Marks: " << static_cast<double>(totalChemistry) / numStudents << endl;
    cout << "Average Mathematics Marks: " << static_cast<double>(totalMath) / numStudents << endl;

   

    return 0;
}
