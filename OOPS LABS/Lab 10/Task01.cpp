# include <iostream>

using namespace std;

class Server;
class Platform;
class Logo{
    string type;
    public:

    Logo(string t = "") : type(t) {};

    friend void change_logo(Server &obj , string new_name);

    void display(){
        cout << "Logo Type :" << type << endl;
    }
};
class Platform{
    string name;
    Logo my_logo;
    public:
    Platform(string n="", string l=""){
        name = n;
        my_logo = Logo(l);
    }

    friend void change_logo(Server &obj , string new_name);

    void display(){
        cout << "Platform Name :" << name << endl;
        my_logo.display();
    }
};
class Server{
    string size;
    Platform my_platform;
    public:
    Server(string sz, string n, string lt){
        size = sz;
        my_platform = Platform(n,lt);
    }

    friend void change_logo(Server &obj , string new_name);

    void display(){
        cout << "Server Size : " << size << endl;
        my_platform.display();
    }
};


void change_logo(Server &obj , string new_name){
    obj.my_platform.my_logo.type = new_name;
}
int main(){
    Server twitter("1000000","Twitter","Blue");
    twitter.display();
    change_logo(twitter, "Bird");
}