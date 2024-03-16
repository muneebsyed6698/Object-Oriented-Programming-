// Syed Muneeb Ur Rehman
// 23k - 0038
#include <iostream>
#include <initializer_list>

using namespace std;

class Office
{
    string Location;
    int seatingCapacity;
    string *Furniture;
    int furnitureSize;

public:
    Office(string l = "", int s = 0, initializer_list<string> array = {"", "", ""}, int sz = 0)
        : Location(l), seatingCapacity(s), furnitureSize(sz)
    {
        Furniture = new string[furnitureSize];
        int j = 0;
        for (auto i : array)
        {
            Furniture[j] = i;
            j++;
            if (j == furnitureSize)
                break;
        }
    }
    void pirntOffice()
    {
        cout << "Location: " << Location << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
        cout << "Size of Furniture: " << furnitureSize << endl;
        cout << "Furniture is " << endl;
        for (int i = 0; i < furnitureSize; i++)
        {
            cout << Furniture[i] << "," << endl;
        }
    }
};

int main()
{
    // Office("Karachi", 500, {"Tables","Desks", "Chairs", "Books", "Notepads"},5)
    Office *room1 = new Office("Karachi", 500, {"Tables", "Desks", "Chairs", "Books", "Notepads"}, 5);
    room1->pirntOffice();
    delete room1;
}
