// Syed Muneeb Ur Rehman
// BS-AI 23k-0038
#include <iostream>
#include <cstdlib>

using namespace std;

class Store
{
private:
public:
    int static count;
    string item[100];
    int price[100];
    void addItem(){
        cout << "Item Number --> " << count + 1 << endl;
        cout << "Enter Name of Item:  " << endl;
        cin >> item[count];
        cout << "Enter Price of Item:  " << endl;
        cin >> price[count];
        cout << "===============" << endl;
        count++;
    }

    void printItem(){
        cout << "\n\n Item\tName" << endl;
        for (int i = 0; i < count; i++ ){
            cout << i + 1 << "\t" << item[i] << endl;
        }
        cout << "===============" << endl;
    }

    void editPrice(){
        printItem();
        
        int index;
        cout << "Enter the serial number of Item You want to Edit: " << endl;
        cin >> index;
        index--;
        cout << "Enter new price for, " << item[index] << endl;
        cin >> price[index];
        cout << "===============" << endl;
    }

    void displayList(){
        cout << "\n\nItem\tName\tPrice" << endl;
        for (int i = 0; i < count; i++ ){
            cout << i + 1 << "\t" << item[i] << "\t" << price[i] << endl;
        }
        cout << "=====================" << endl;
    }
};
int Store :: count;

int main(){
    Store stationary;
    while(true){
        int Task=0;
        system("cls");

        cout << "Select action: \n1.Add Item\n2.Show List of Items\n3.Modify Price\n4.Display all items with their price.\n";
        cin >> Task;
        switch (Task){
            case 1:

                stationary.addItem();
                cout << ".\n.\n.\nPress any key to continue....." << endl;
                getchar();
                getchar();
                continue;
            case 2:
                stationary.printItem();
                cout << ".\n.\n.\nPress any key to continue....." << endl;
                getchar();
                getchar();
                continue;
            case 3:
                stationary.editPrice();
                cout << ".\n.\n.\nPress any key to continue....." << endl;
                getchar();
                getchar();
                continue;
            case 4:
                stationary.displayList();
                cout << ".\n.\n.\nPress any key to continue....." << endl;
                getchar();
                getchar();
                continue;
        }

    }
}   