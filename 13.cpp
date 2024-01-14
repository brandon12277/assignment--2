#include <iostream>
#include <cmath>

using namespace std;


class Shape {
protected:
    string name;

public:
    Shape(string shapeName) : name(shapeName) {
        
    }

   
    virtual double area() = 0;

   
    virtual void display()= 0;

   
    virtual ~Shape() {
        cout << "Destructor of Shape" << endl;
    }
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape("Circle"), radius(r) {}

   
    double area(){
        return 3.14 * radius * radius;
    }

    
    void display(){
        cout << "Radius: " << radius << endl;
    }

    
    ~Circle(){
        cout << "Destructor of Circle" << endl;
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {}

    
    double area(){
        return length * width;
    }

   
    void display(){
      
        cout << "Length: " << length << ", Width: " << width << endl;
    }

   
    ~Rectangle(){
        cout << "Destructor of Rectangle" << endl;
    }
};


class Trapezoid : public Shape {
private:
    double base1;
    double base2;
    double height;

public:
    Trapezoid(double b1, double b2, double h) : Shape("Trapezoid"), base1(b1), base2(b2), height(h) {}

   
    double area(){
        return 0.5 * (base1 + base2) * height;
    }

    
    void display(){
        cout << "Base1: " << base1 << ", Base2: " << base2 << ", Height: " << height << endl;
    }

   
    ~Trapezoid(){
        cout << "Destructor of Trapezoid" << endl;
    }
};

int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Trapezoid(3.0, 7.0, 4.0);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->area() << endl << endl;
    }

    return 0;
}
