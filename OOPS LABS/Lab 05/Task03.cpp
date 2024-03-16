#include <iostream>

using namespace std;

class ValidateString{
    string s;
public:
    ValidateString(string s){
        this->s = s;
    }
    /*
    const function promises that the contents of that class are not changed
    if we make the attribute 's' const and then it can only be accessed and used by a const method
    */
    const bool check(){
        for(int i = 0 ; i < s.size(); i++ ){
            // cout << s.at(i) << "->" <<  (int)s.at(i) <<endl;
            // should be 65-90
            if ( (int)s.at(i) >= 65 && (int)s.at(i) <= 90){
                continue;
            }
            // should be 97-122
            else if ( (int)s.at(i) >= 97 && (int)s.at(i) <= 122){
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }
};

int main (){
    ValidateString a("assalamualikum");
    ValidateString b("HelloWorld123");

    if (a.check()) cout << "--------------true" <<endl;
    else cout << "------------------------false" <<endl;

    if (b.check()) cout << "--------------true" <<endl;
    else cout << "------------------------false" <<endl;
}