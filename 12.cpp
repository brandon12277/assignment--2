#include <iostream>
using namespace std;


class Shape {
public:
    void display() const {
        cout << "This is a shape." << endl;
    }
};


class Polygon : public Shape {
public:
    void display() const {
        cout << "Polygon is a shape." << endl;
    }
};


class Rectangle : public Polygon {
public:
    void display() const {
        cout << "Rectangle is a polygon." << endl;
    }
};


class Triangle : public Polygon {
public:
    void display() const {
        cout << "Triangle is a polygon." << endl;
    }
};


class Square : public Rectangle {
public:
    void display() const {
        cout << "Square is a rectangle." << endl;
    }
};

int main() {
    Shape shapeObj;
    Polygon polygonObj;
    Rectangle rectangleObj;
    Triangle triangleObj;
    Square squareObj;

    
    cout << "Calling display() for each object:" << endl;
    shapeObj.display();     
    polygonObj.display();     
    rectangleObj.display();   
    triangleObj.display();   
    squareObj.display();    

    return 0;
}
