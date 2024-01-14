#include <iostream>
#include <string>

using namespace std;


class Rectangle {
public:
    int length;
    int breadth;

   
    Rectangle(int length,int breadth) {
       this->length = length;
       this->breadth = breadth;
    }
};

int main() {
    
   const int SIZE = 5;  
    Rectangle rectangles[SIZE] = {
        Rectangle(2.5, 3.0),
        Rectangle(4.0, 5.0),
        Rectangle(4.5, 4.5),
        Rectangle(5.0, 6.0),
        Rectangle(5.5, 5.5),
        
    };

    
    for(int i = 0;i<SIZE;i++){
        if(rectangles[i].length == rectangles[i].breadth){
            cout<<"Number "<<i+1<<" rectangle is of equal length and breadth"<<endl;
        }
    }


   
   
    

    return 0;
}
