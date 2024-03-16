// Syed Muneeb Ur Rehman
// BS-AI 23k-0038
#include <iostream>
#include <string>

using namespace std;

class Calender
{
    string january[30];
    string february[30];
    string march[30];
    string april[30];
    string may[30];
    string june[30];
    string july[30];
    string august[30];
    string september[30];
    string october[30];
    string november[30];
    string december[30];

public:
    void addTask(string month, int day, string task)
    {
        if (month == "january")
            january[day - 1] = task;
        else if (month == "february")
            february[day - 1] = task;
        else if (month == "march")
            march[day - 1] = task;
        else if (month == "april")
            april[day - 1] = task;
        else if (month == "may")
            may[day - 1] = task;
        else if (month == "june")
            june[day - 1] = task;
        else if (month == "july")
            july[day - 1] = task;
        else if (month == "august")
            august[day - 1] = task;
        else if (month == "september")
            september[day - 1] = task;
        else if (month == "october")
            october[day - 1] = task;
        else if (month == "november")
            november[day - 1] = task;
        else if (month == "december")
            december[day - 1] = task;
    }
    void removeTask(string month, int day)
    {
        if (month == "january")
            january[day - 1] = "";
        else if (month == "february")
            february[day - 1] = "";
        else if (month == "march")
            march[day - 1] = "";
        else if (month == "april")
            april[day - 1] = "";
        else if (month == "may")
            may[day - 1] = "";
        else if (month == "june")
            june[day - 1] = "";
        else if (month == "july")
            july[day - 1] = "";
        else if (month == "august")
            august[day - 1] = "";
        else if (month == "september")
            september[day - 1] = "";
        else if (month == "october")
            october[day - 1] = "";
        else if (month == "november")
            november[day - 1] = "";
        else if (month == "december")
            december[day - 1] = "";
    }
    void printTasks(){
        for (int i =0; i < 30; i++ ){
            if (!january[i].empty()){
                cout << "January , " << i+1 << ",Task --> "<< january[i] << endl;
            }
        }

        for (int i =0; i < 30; i++ ){
            if (!february[i].empty()){
                cout << "february , " << i+1 << ",Task --> "<< february[i] << endl;
            }
        }

        for (int i =0; i < 30; i++ ){
            if (!march[i].empty()){
                cout << "march , " << i+1 << ",Task --> "<< march[i] << endl;
            }
        }

        for (int i =0; i < 30; i++ ){
            if (!april[i].empty()){
                cout << "april , " << i+1 << ",Task --> "<< april[i] << endl;
            }
        }

        for (int i =0; i < 30; i++ ){
            if (!may[i].empty()){
                cout << "may , " << i+1 << ",Task --> "<< may[i] << endl;
            }
        }

        for (int i =0; i < 30; i++ ){
            if (!june[i].empty()){
                cout << "june , " << i+1 << ",Task --> "<< june[i] << endl;
            }
        }

        for (int i =0; i < 30; i++ ){
            if (!july[i].empty()){
                cout << "july , " << i+1 << ",Task --> "<< july[i] << endl;
            }
        }

        for (int i =0; i < 30; i++ ){
            if (!august[i].empty()){
                cout << "august , " << i+1 << ",Task --> "<< august[i] << endl;
            }
        }

        for (int i =0; i < 30; i++ ){
            if (!september[i].empty()){
                cout << "september , " << i+1 << ",Task --> "<< september[i] << endl;
            }
        }

        for (int i =0; i < 30; i++ ){
            if (!october[i].empty()){
                cout << "october , " << i+1 << ",Task --> "<< october[i] << endl;
            }
        }

        for (int i =0; i < 30; i++ ){
            if (!november[i].empty()){
                cout << "november , " << i+1 << ",Task --> "<< november[i] << endl;
            }
        }

        for (int i =0; i < 30; i++ ){
            if (!december[i].empty()){
                cout << "december , " << i+1 << ",Task --> " << december[i] << endl;
            }
        }
    }

};
// << "Task --> "
int main() {
    Calender c1;
    c1.addTask("february" , 1, "Shadi" );
    c1.addTask("march", 15, "Qawali Night");
    c1.printTasks();
    c1.removeTask("february" , 1);
    c1.printTasks();

    
}