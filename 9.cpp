#include <iostream>

using namespace std;

class Mammals {
public:
    void mammalFunction() {
        cout << "I am a mammal" << endl;
    }
};


class MarineAnimals {
public:
    void marineAnimalFunction() {
        cout << "I am a marine animal" << endl;
    }
};


class BlueWhale : public Mammals, public MarineAnimals {
public:
    void blueWhaleFunction() {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};

int main() {
    
    Mammals mammalObj;
    MarineAnimals marineAnimalObj;
    BlueWhale blueWhaleObj;

   
    cout << "a) Calling function of Mammals by the object of Mammals:" << endl;
    mammalObj.mammalFunction();

    cout << "\nb) Calling function of MarineAnimals by the object of MarineAnimals:" << endl;
    marineAnimalObj.marineAnimalFunction();

    cout << "\nc) Calling function of BlueWhale by the object of BlueWhale:" << endl;
    blueWhaleObj.blueWhaleFunction();

    cout << "\nd) Calling function of each parent by the object of BlueWhale:" << endl;
    blueWhaleObj.mammalFunction();
    blueWhaleObj.marineAnimalFunction();

    return 0;
}
