// Syed Muneeb Ur Rehman
// BS-AI 23k-0038
#include <iostream>

using namespace std;

class WaterBottle{
string company;
string color;
float waterInLiters;
int waterInMilliliters;
public:
    void setter(){
        cout << "Enter Company: " << endl;
        cin >> company;
        
        cout << "Enter Color: " << endl;
        cin >> color;

        cout << "Enter Water Capacity in milliters: ";
        cin >> waterInMilliliters;

        waterInLiters = waterInMilliliters / 1000.00;

    }

    void getter(){
        cout << "Company is " << company << endl;
        cout << "Color is " << color << endl;
        cout << "Capacity in Liters is " << waterInLiters << endl;
        cout << "Capacity in Milliliters is " << waterInMilliliters <<endl;
    }
};


int main(){
    WaterBottle bottle1;
    bottle1.setter();
    bottle1.getter();
}
