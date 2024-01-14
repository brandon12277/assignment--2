#include <iostream>
using namespace std;

class Fruit {
protected:
    int totalFruits; 
public:
    Fruit() : totalFruits(0) {} 

    void setTotalFruits(int num) {
        totalFruits = num;
    }

    int getTotalFruits() const {
        return totalFruits;
    }
};


class Apples : public Fruit {
private:
    int applesCount;

public:
    Apples(int count) : applesCount(count) {
        setTotalFruits(applesCount);
    }

    int getApplesCount() const {
        return applesCount;
    }

    void display() const {
        cout << "Number of Apples: " << getApplesCount() << endl;
    }
};


class Mangoes : public Fruit {
private:
    int mangoesCount; 

public:
    Mangoes(int count) : mangoesCount(count) {
        setTotalFruits(mangoesCount); 
    }

    int getMangoesCount() const {
        return mangoesCount;
    }

    void display() const {
        cout << "Number of Mangoes: " << getMangoesCount() << endl;
    }
};

int main() {
    
    Apples applesObj(10); 
    Mangoes mangoesObj(5); 

   
    applesObj.display();
    mangoesObj.display();

    
    cout << "Total number of fruits in the basket: " << applesObj.getTotalFruits() + mangoesObj.getTotalFruits() << endl;

    return 0;
}
