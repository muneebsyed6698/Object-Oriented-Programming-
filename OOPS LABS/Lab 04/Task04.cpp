// Syed Muneeb Ur Rehman
// 23k-0038
#include <iostream>
#include <initializer_list>

using namespace std;

class Office
{
    string Location;
    int seatingCapacity;
    string Furniture[3];

public:
    Office(string l = "", int s = 0, initializer_list<string> array = {"", "", ""})
        : Location(l), seatingCapacity(s)
    {
        int j = 0;
        for (auto i : array)
        {
            Furniture[j] = i;
            j++;
        }
    }
};

int main()
{
    Office room1("Lahore");
    Office room2("Karachi", 15);
    Office room3("Hyderabad", 3, {"Chair", "Table", "Guns"});
}
