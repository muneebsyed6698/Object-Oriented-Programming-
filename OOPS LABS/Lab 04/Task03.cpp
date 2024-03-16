// Syed Muneeb Ur Rehman
// 23k0038

#include <iostream>
#include <string>

using namespace std;

string week[7] = {"Sunday", "Monday", "Tuesday", "Wednessday", "Thursday", "Friday", "Saturday"};

class WeekDays
{
    string Days[7];

public:
    WeekDays()
    {
        for (int i = 0; i < 7; i++)
        {
            Days[i] = week[i];
        }
    }

    WeekDays(int n)
    {
        
        if (n >= 7)
        {
            n = n % 7;
        }
        for (int i = 0; i < 7; i++)
        {   
            Days[i] = week[n];
            
            if (n == 7)
            {
                n = 0;
                continue;
            }
            n++;
        }
    }
    string getCurrentDay()
    {
        return Days[0];
    }
    string getPreviousDay()
    {
        return Days[6];
    }
    string getNextDay()
    {
        return Days[1];
    }
    string getNthDayFromToday(int n)
    {
        if (n >= 7)
        {
            n = n % 7;
        }
        return Days[n];
    }
    void printWeekArray()
    {
        for (int i = 0; i < 7; i++)
        {
            cout << " " << Days[i];
        }
        cout << endl;
    }
};

int main()
{
    WeekDays week1(7);
    cout << "The Current Day is: " << week1.getCurrentDay() << endl;
    cout << "The Next Day is: " << week1.getNextDay() << endl;
    cout << "The Previous Day is: " << week1.getPreviousDay() << endl;
    cout << "The 2 Day from Today is: " << week1.getNthDayFromToday(2) << endl;
}