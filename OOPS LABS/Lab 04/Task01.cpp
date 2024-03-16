// Syed Muneeb Ur Rehman
// 23k0038

#include <iostream>

using namespace std;

class Book
{
private:
    string Name;
    string Author;
    int ISBN_Number;
    int totalPageCount;
    int pagesRead;

public:
    Book()
    {
        Name = "Book";
        Author = "Author";
        ISBN_Number = 0000;
        totalPageCount = 00;
        pagesRead = 00;
    }
    Book(string n, string a, int isb, int tp, int pr)
    {
        Name = n;
        Author = a;
        ISBN_Number = isb;
        totalPageCount = tp;
        pagesRead = pr;
    }
    void updatePagesRead(int pr)
    {
        pagesRead = pr;
        if (pagesRead == totalPageCount)
            cout << "You have finished The Book" << endl;
    }
};

int main()
{
    Book b1;
    Book b2("Harry Potter", "J.K Rowling", 1408, 1000, 100);
    b2.updatePagesRead(1000);
}
