#include <iostream>

using namespace std;

class Calculator {
private:
    double num1, num2;

   
    class Addition {
    public:
        Addition(double a, double b) : num1(a), num2(b) {}
        double perform() {
            return num1 + num2;
        }
    private:
        double num1, num2;
    };

   
    class Subtraction {
    public:
        Subtraction(double a, double b) : num1(a), num2(b) {}
        double perform() {
            return num1 - num2;
        }
    private:
        double num1, num2;
    };

    
    class Multiplication {
    public:
        Multiplication(double a, double b) : num1(a), num2(b) {}
        double perform() {
            return num1 * num2;
        }
    private:
        double num1, num2;
    };

   
    class Division {
    public:
        Division(double a, double b) : num1(a), num2(b) {}
        double perform() {
            if (num2 != 0) {
                return num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        }
    private:
        double num1, num2;
    };

public:
    
    Calculator(double a, double b) : num1(a), num2(b) {}

    
    void menu() {
        int choice;
        do {
            cout << "\nMenu:\n";
            cout << "1. Addition\n";
            cout << "2. Subtraction\n";
            cout << "3. Multiplication\n";
            cout << "4. Division\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Result: " << Addition(num1, num2).perform() << endl;
                    break;
                case 2:
                    cout << "Result: " << Subtraction(num1, num2).perform() << endl;
                    break;
                case 3:
                    cout << "Result: " << Multiplication(num1, num2).perform() << endl;
                    break;
                case 4:
                    cout << "Result: " << Division(num1, num2).perform() << endl;
                    break;
                case 5:
                   exit(0);
                default:
                    cout << "Invalid choice!" << endl;
            }
        } while (choice != 5);
    }
};

int main() {
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculator calc(a, b);  
    calc.menu();

    return 0;
}
