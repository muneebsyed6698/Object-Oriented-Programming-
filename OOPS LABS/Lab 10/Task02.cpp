#include <iostream>

using namespace std;

class number {
    int value;
    public:
    number(int n){
        value = n;
    }
    number operator--(int){
        this->value = value / 4;
        return *this;
    }
    number operator--(){
        this->value = value * 4;
        return *this;
    }
    void display(){
        cout << "Value is " << value <<  endl; 
    }
    
};

int main(){
    number a(5);
    --a;
    a.display();
}