#include <iostream>

using namespace std;

class LoanHelper {
    const float rate;
    float amount;
    int month;
public:
    LoanHelper(float rt, float am, int m) : rate(rt), amount(am ), month(m){}

    void calculate(){
        float to_pay = amount / month  ;
        to_pay = to_pay * (1 + (rate / 100));
        cout << "You have to pay " << to_pay << " Rupees per month, for " << month << " months " << endl; 
    }
};

int main (){
    LoanHelper a(0.5,1000,12);
    a.calculate();
}