#include <iostream>

using namespace std;

class Circle {
private:
    double radius;

   
    class AreaCalculator {
    public:

        
        double calculateArea(double radius) {
           
            return 3.14159 * radius * radius;
        }
    };

public:
   
    Circle(double r) : radius(r) {}

    
    void displayArea() {
        AreaCalculator calculator;  
        double area = calculator.calculateArea(radius); 
        cout << "Area of the circle with radius " << radius << " is: " << area << endl;
    }
};

int main() {
    double r;
    
    cout << "Enter the radius of the circle: ";
    cin >> r;

    Circle circleObj(r);  
    circleObj.displayArea(); 

    return 0;
}
