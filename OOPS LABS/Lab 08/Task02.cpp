#include <iostream>

using namespace std;

class Character{
public:
int health;
int damage;
    Character(int h = 0, int d = 0){
        health = h;
        damage = d;
    }

    void display(){
        cout << "Health is " << health << endl;
        cout << "Damage is " << damage << endl;
    }
};

class Enemy : protected Character {
    public:
    Enemy (int h = 0, int d = 0) : Character(h, d){}

    void display(){
        cout << "Enemy Detais are" << endl;
        Character::display();
    }

};

class Player : protected Character {
    public:
    Player (int h = 0, int d = 0) : Character(h, d){}

    void display(){
        cout << "Player Detais are" << endl;
        Character::display();
    }
};

class Wizard : public Player{
    int magical_power;
    string spells;
    public:
    Wizard(int h = 0, int d = 0 , int m = 0 , string sp = "") : Player(h,d), magical_power(m), spells(sp){}
    void display(){
        cout << "Wizard Details are: " << endl;
        Character::display();
        cout << "Magical Powers " << magical_power << endl;
        cout << "Spells " << spells << endl;
    }
};

int main(){
    Wizard snape(10,9,10,"Avada Kadavra");
    snape.display();
}