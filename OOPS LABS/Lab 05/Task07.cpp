#include <iostream>
#include <vector>

using namespace std;

class order{

};

class menu{
    vector <string> menu_items;
};

class payment{

};

class OrderingSystem{
    // Composition 
    menu menu;

    // Aggregation

    vector <order> list_of_orders;
    vector <payment> list_of_payment;

};