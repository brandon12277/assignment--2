#include <iostream>

using namespace std;

class NumberFind {
private:
    double num1, num2, num3;

public:
    class Inner {
    public:
        double findGreatest(double a, double b, double c) {
            if (a >= b && a >= c)
                return a;
            else if (b >= a && b >= c)
                return b;
            else
                return c;
        }
    };

   
    NumberFind(double num1, double num2, double num3) {
        this->num1 = num1;
        this->num2 = num2;
        this->num3 = num3;
    }
    void displayGreatest() {
        Inner innerObj;
        double greatest = innerObj.findGreatest(num1, num2, num3);
        cout << "The greatest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << greatest << endl;
    }
};

int main() {
    double a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    NumberFind obj(a, b, c);  
    obj.displayGreatest();       

    return 0;
}
