// Syed Muneeb Ur Rehman
// BS-AI 23k-0038

#include <iostream>

using namespace std;

class BoardMarker{
string Brand;
string Shade;
bool Refillable;
bool Ink_Status;
public:
    void setter(){
        char temp;
        cout << "Enter Brand: " << endl;
        cin >> Brand;

        cout << "Enter Shade: " << endl;
        cin >> Shade;

        cout << "Is The Marker Refillable (y/n): " << endl;
        cin >> temp;

        if (temp == 'y'){
            Refillable = true;
        }
        else if(temp == 'n'){
            Refillable = false;
        }

        cout << "Enter Ink Status --> ('y' if full / 'n' if depleted): " << endl;
        cin >> temp;

        if (temp == 'y' ){
            Ink_Status = true;
        }
        else if (temp == 'n'){
            Ink_Status = false;
        }
    }
    // writtin method is called in getter function.....
    void writtingMethod(){
        if (Ink_Status){
            cout <<  "We can write using This Marker....!" << endl;
        }
        else{
            cout << "We cannot write using This Marker.....!" << endl;
        }
    }


    // Refillable method is called in getter function.....
    void refillMethod(){
        if(Refillable){
            cout << "This marker is Refillable.." << endl;
        }
        else {
            cout << "This marker is NOT Refillable.. " <<endl;
        }
    }


    void getter(){
        cout << "Brand is " << Brand << endl;
        cout << "Shade is " << Shade << endl;


        //methods are called here;
        writtingMethod();
        refillMethod();        
    }
};

int main(){
    BoardMarker marker1;

    marker1.setter();
    marker1.getter();
}