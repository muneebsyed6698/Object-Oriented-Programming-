#include <iostream> 
#include <initializer_list>

using namespace std;

class engine{

};

class wheels{

};

class headlight{

};

class steering{

};

class car{

//composition

engine e;
steering s;

// aggregation

wheels*  array_of_wheels[4];

headlight* array_of_headlights[2];


};

