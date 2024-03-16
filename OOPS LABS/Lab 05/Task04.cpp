#include <iostream>

using namespace std;

class BankAccount
{
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int n, string h, double b)
    {
        accountNumber = n;
        accountHolderName = h;
        balance = b;
    }

    void deposit(double b)
    {
        balance += b;
    }

    void withdraw(double b)
    {
        if (b <= balance)
        {
            balance -= b;
        }
    }
    void display(){
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

};

int main (){
    BankAccount array[3] = {BankAccount(0,"Muneeb",12300),
                            BankAccount(1,"User",78600),
                            BankAccount(5,"Broke", 74100)};
    
    for (int i = 0 ; i < 3 ; i++ ){
        array[i].display();
        cout << "___________________________" << endl;
    }
    

    for (int i = 0 ; i < 3 ; i++ ){
        array[i].deposit(500.0);
        array[i].display();
        array[i].withdraw(5000.0);
        array[i].display();
        cout << "___________________________" << endl;
    }
}