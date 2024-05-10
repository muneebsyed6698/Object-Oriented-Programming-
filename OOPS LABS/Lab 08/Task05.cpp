#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string mk, string md, int y)
    {
        make = mk;
        model = md;
        year = y;
    }
};

class Car : protected Vehicle
{
protected:
    int doors;
    double fuelEfficiency;

public:
    Car(int d, double f, string make, string model, int year) : Vehicle(make, model, year)
    {
        doors = d;
        fuelEfficiency = f;
    }
};

class ElectricCar : protected Car
{
protected:
    int batteryLife;

public:
    ElectricCar(int doors, double fuelEfficiency, string make, string model, int year, int batteryLife) : batteryLife(batteryLife), Car(doors, fuelEfficiency, make, model, year)
    {
    }

    void display()
    {
        cout << "Electric car" << endl;
        cout << "Number of doors: " << doors << endl;
        cout << "Fuel status: " << fuelEfficiency << endl;
        cout << "Company: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year of manufacturing: " << year << endl;
        cout << "Battery life: " << batteryLife << endl;
    }
};

int main()
{
    ElectricCar car1(4, 62.88, "Toyota", "Supra", 1978, 55);
    car1.display();
}