#include <iostream>
using namespace std;

class Position
{
protected:
    int x, y, z;
public:
    Position(int x, int y, int z) : x(x), y(y), z(z){}
};

class Health
{
protected:
    int health;

public:
    Health(int health) : health(health)
    {
    }
};

class Character : public Health, public Position
{
private:
    string name;
    float height;
    int weight;

public:
    Character(int h, int x, int y, int z, string n, double ht, int w) : Position(x, y, z), Health(h)
    {
        name = n;
        height = ht;
        weight = w;
    }

    void display()
    {
        cout << "Character Data" << endl;
        cout << "Name " << name << endl;
        cout << "Height " << height << endl;
        cout << "Weight " << weight << endl;
        cout << "Position ->(" << x << ", " << y << ", " << z << ")" << endl;
        cout << "Health " << health << endl;
    }

    void updateHealth(int h)
    {
        health = h;
    }

    void updateWeight(int w)
    {
        weight += w;
    }

    void changePosition(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
};

int main()
{
    Character c1(58, 7, 6, 19, "Wizard", 1.9, 14);
    c1.display();
    cout << "Updating the information" << endl;
    c1.updateHealth(15);
    c1.updateWeight(20);
    c1.changePosition(15, -2, 0);

    c1.display();
}