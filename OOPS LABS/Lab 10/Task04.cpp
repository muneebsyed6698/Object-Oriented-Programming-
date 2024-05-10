#include <iostream>

using namespace std;

class PrintClass{
    int len;
    int wid;
    public:

    PrintClass(int l , int w){
        len = l;
        wid = w;
    }
    friend class Perimeter;

};
 
class Perimeter{
    int len;
    int wid;


    public:
    Perimeter(PrintClass &obj){
        this->len = obj.len;
        this->wid = obj.wid;
    }

    void display_Perimeter(){
        cout << "Perimeter is " << 2*len + 2*wid << endl;
    }

    static void display_Perimeter(PrintClass &obj){
        cout << "Perimeter is " << 2 * (obj.len) + 2 * (obj.wid) << endl;
    }
    
};

int main(){
    PrintClass a(10,10);
    Perimeter a_peri(a);
    a_peri.display_Perimeter();

    Perimeter::display_Perimeter(a);
}