#include <iostream>

using namespace std;

class Book {

protected:
string title;
string author;
string publisher;

public:
Book(string t, string a, string p) : title (t), author(a), publisher(p){};

void display(){
    cout << "Title : " << title << endl;
    cout << "Author : " << author << endl;
    cout << "Publisher : " << publisher << endl;
}

};

class Fictional_Book : public Book{
string genre;
string protagonist;
public:
Fictional_Book(string t, string a, string p, string g, string pr) : Book(t,a,p), genre(g), protagonist(pr){};

void display(){
    Book::display();
    cout << "Genre : " << genre << endl;
    cout << "Protagonist : " << protagonist << endl;
}
};

int main(){
    Fictional_Book a( "Harry Potter" , "J.K Rowling" , "Disney" , "Magic Fantassy" , "Harry Potter" );
    a.display();
}