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
        totalPageCount = 1000;
        pagesRead = 0;
    }

    void updatePagesRead(int pr)
    {
        pagesRead = pr;
        if (pagesRead == totalPageCount)
            cout << "You have finished The Book" << endl;
    }

    void settDataPrompt()
    {
        cout << "Enter Book Name: " << endl;
        cin >> Name;
        cout << "Enter Author Name: " << endl;
        cin >> Author;
        cout << "Enter ISBN Number: " << endl;
        cin >> ISBN_Number;
        cout << "Enter Total Pages: " << endl;
        cin >> totalPageCount;
        cout << "Enter Pages Read: " << endl;
        cin >> pagesRead;
    }

    void settDataMain(string n, string a, int isb, int tp, int pr)
    {
        Name = n;
        Author = a;
        ISBN_Number = isb;
        totalPageCount = tp;
        pagesRead = pr;
    }

    void showBookInfo()
    {
        cout << "Name :" << Name << endl;
        cout << "Author: " << Author << endl;
        cout << "ISBN Number: " << ISBN_Number << endl;
        cout << "Total Pages: " << totalPageCount << endl;
        cout << "Pages Read : " << pagesRead << endl;
    }

};

int main()
{
    Book b1;
    b1.settDataMain("Harry Potter", "J.K Rowling", 1408, 1000, 100);
    b1.updatePagesRead(1000);
    b1.showBookInfo();
}
