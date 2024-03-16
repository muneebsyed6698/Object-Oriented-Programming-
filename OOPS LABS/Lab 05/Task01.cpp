#include <iostream>

using namespace std;

float tell_area(float sd);

class Square {
    float sideLength;
    float area;
public: 
    static int allareas;
    Square(int sd = 1) : sideLength(sd){
        
    }

    void calculate_area(){
        area = sideLength * sideLength;
        allareas += area;
    }

    void set_sideLength(float sd){
        sideLength = sd;
    }

    float get_sideLength(){
        return sideLength;
    }

    float get_area(){
        return area;
    }




};
int Square :: allareas = 0;
float tell_area(float sd){
    return sd * sd;
}

int main(){
    Square a;
    Square b(5);
    Square c(15);

    a.calculate_area();
    cout << "Area is " << a.get_area() <<endl;
    cout << "All Area is " << Square::allareas <<endl;

    b.calculate_area();
    cout << "Area is " << b.get_area() <<endl;
    cout << "All Area is " << Square::allareas <<endl;

    c.calculate_area();
    cout << "Area is " << c.get_area() <<endl;
    cout << "All Area is " << Square::allareas <<endl;
}