#include <iostream>
#include <string>

using namespace std;


class Student {
public:
    int roll;
    string name;
    double mark1,mark2,mark3;

   
    Student(int roll, string name, double *marks) {
        this->roll = roll;
        this->name = name;
        mark1 = marks[0];
        mark2 = marks[1];
        mark3 = marks[2];
    }
};

int main() {
    
    const int SIZE = 6;  
    double johnMarks[] = {19.8, 34.5, 46.7};
    double janeMarks[] = {55.0, 67.5, 78.3};
    double doeMarks[] = {65.2, 70.5, 88.7};
    double smithMarks[] = {48.5, 52.5, 61.7};
    double aliceMarks[] = {70.2, 75.5, 80.7};
    double bobMarks[] = {85.2, 90.5, 92.7};

    Student students[SIZE] = {
        Student(1, "John", johnMarks),
        Student(2, "Jane", janeMarks),
        Student(3, "Doe", doeMarks),
        Student(4, "Smith", smithMarks),
        Student(5, "Alice", aliceMarks),
        Student(6, "Bob", bobMarks)
    };
    
    char grade[SIZE];
   
    for(int i = 0;i<SIZE;i++){
        double avg  = (double)(students[i].mark1 + students[i].mark2 +students[i].mark3)/(double)3;
        cout<<"ROLL : "<<students[i].roll<<endl;
        cout<<"NAME : "<<students[i].name<<endl;
        cout<<"MARK 1 : "<<students[i].mark1<<" ";
         cout<<"MARK 2 : "<<students[i].mark2<<" ";
          cout<<"MARK 3: "<<students[i].mark3<<endl;
          cout<<"AVG : "<<avg<<endl;
          if(avg>80)cout<<"GRADE A"<<endl;
          else if(avg>70)cout<<"GRADE B"<<endl;
          else if (avg>60)cout<<"GRADE C"<<endl;
          else if (avg>50)cout<<"GRADE D"<<endl;
           else if (avg>40)cout<<"GRADE E"<<endl;
           else
           cout<<"GRADE F"<<endl;
           cout<<endl<<endl;
    }
    

    return 0;
}
