#include <iostream>

using namespace std;

double pi = 3.142;

class Shape
{

public:
    double area(double r)
    {
        return  3.142 * r * r;
    }

    int area(int l, int w)
    {
        return l * w;
    }

    double area(double b, double h)
    {
        return (0.5 * b * h);
    }

    double perimeter(double r)
    {
        return (2 * 3.142 * r);
    }

    double perimeter(double l, double w)
    {
        return ((2 * l) + (2 * w));
    }

    double perimeter(double s1, double s2, double s3)
    {
        return (s1 + s2 + s3);
    }
};

int main()
{
    Shape circle;
    Shape rectangle;
    Shape triangle;


    cout << "____Circle____" << endl;
    cout << "Area :" << circle.area(5) << endl;
    cout << "Perimeter :" << circle.perimeter(5) << endl;

    cout << "___Rectangle___:" << endl;
    cout << "Area: " << rectangle.area(10, 10) << endl;
    cout << "Perimeter: " << rectangle.perimeter(10, 10) << endl;


    cout << "____Triangle____" << endl;
    cout << "Area :" << triangle.area(6, 6) << endl;
    cout << "Perimeter :" << triangle.perimeter(5, 5, 5) << endl;
}
