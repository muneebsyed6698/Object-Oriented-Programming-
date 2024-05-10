#include <iostream>

using namespace std;

class shape {
    int area;

    public:
    shape (int ar){
        area = ar;
    }
    shape operator+ (shape &other) const{
        return shape(this->area + other.area);
    }

    void display(){
        cout << "Area = " << area << endl;
    }
};

int main(){
    shape shape1(10);
    shape shape2(20);
    shape sum = shape1 + shape2;
    sum.display();
}