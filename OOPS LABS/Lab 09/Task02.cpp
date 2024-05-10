#include <iostream>
#include <math.h>
using namespace std;


class Shape{
public: 
    virtual double area() const = 0 ;
    virtual double perimeter() const = 0 ;
    virtual void displayProperties() const{
    }
};

class Circle : public Shape{
protected:
    double rad;
public:
    Circle (double r): rad(r){
    }
    double area() const override{
        return 3.142 * rad * rad;
    }
    double perimeter() const override{
        return 3.142 * 2 * rad;
    };
    void displayProperties() const override{
        cout << "Circle Shape" << endl;
        cout << "Radius = " << rad << endl;
        cout << "Area = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    };
};

class Rectangle : public Shape{
protected:
    double len;
    double bre;
public:
    Rectangle (double l , double b) {
        len = l;
        bre = b;
    }
    double area() const override{
        return len * bre;
    }
    double perimeter() const override{
        return 2* len + 2* bre;
    };
    void displayProperties() const override{
        cout << "Rectangle Shape" << endl;
        cout << "Sides  = " << len << " , " << bre << endl;
        cout << "Diagonal = " << sqrt(pow(len,2) + pow(bre,2)) << endl;
        cout << "Area = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    };
};

class Square : public Shape{
protected:
    double side;
public:
    Square (double s) {
        side = s;
    }
    double area() const override{
        return pow(side, 2);
    }
    double perimeter() const override{
        return 4* side;
    };
    void displayProperties() const override{
        cout << "Square Shape" << endl;
        cout << "Side  = " << side << endl;
        cout << "Diagonal = " << sqrt(pow(side,2) + pow(side,2)) << endl;
        cout << "Area = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    };
};


class Triangle : public Shape{
protected:
    double a;
    double b;
    double c;
public:
    Triangle (double a,double b,double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    
    double perimeter() const override{
        return a + b + c;
    };

    double area() const override{
        double s = perimeter() / 2;

        return sqrt(s * (s-a) * (s-b) * (s-c));
    }

    void displayProperties() const override{
        // cout << "Triangle Shape" << endl;
        if ( a == b && a == c){
            cout << "Equilateral Triangle Shape" << endl;
        }
        else{
            cout << "Triangle Shape" << endl;
        }
        cout << "Area = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    };
};



void Display(Shape *shapePtr){
    shapePtr->displayProperties();
}


int main() {
    int res = 0;
    Shape *ptr;

    while (res >= 0)
    {
        cout << "Welcome to the Geometry Competition Calculator!\n\nPlease select a shape:\n1. Circle\n2. Rectangle\n3. Square\n4. Triangle" << endl;
        cout << "Enter Your Choice : " << endl;
        cin >> res;

        switch (res){
            case 1:
                double temp;
                cout << "Enter Radius " << endl;
                cin >> temp;
                ptr = new Circle (temp);
                goto next;
            case 2: 
                double temp1,temp2;
                cout << "Enter Side 1 " << endl;
                cin >> temp1;
                cout << "Enter Side 2 " << endl;
                cin >> temp2;
                ptr = new Rectangle (temp1,temp2);
                goto next;
            case 3: 
                double temps;
                cout << "Enter Side " << endl;
                cin >> temps;
                ptr = new Square (temps);
                goto next;
            case 4: 
                double tempa,tempb,tempc;
                cout << "Enter Side 1 " << endl;
                cin >> tempa;
                cout << "Enter Side 2 " << endl;
                cin >> tempb;
                cout << "Enter Side 3 " << endl;
                cin >> tempc;
                ptr = new Triangle (tempa,tempb,tempc);
                goto next;
        }
        next:
        Display(ptr);
        char b;
        cout << "Do You want to calculate the properties of another shape (y/n) : " << endl;
        cin >> b;
        if (b == 'y' ) system("cls");
        else if (b == 'n') res = -1;

    }
    
}