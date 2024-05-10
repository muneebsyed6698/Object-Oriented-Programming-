#include <iostream>

using namespace std;


class Course
{
    string code;
    string name;
    int credit;

public:
    Course(string c, string n, int cr) : code(c), name(n), credit(cr)
    {
    }
    Course(const Course &c)
    {
        this->code = c.code;
        this->credit = c.credit;
        this->name = c.name;
    }
    ~Course()
    {
    }
    string get_code()
    {
        return code;
    }
    int get_credit(){
        return credit;
    }
};

class Student
{
    string ID;
    string name;
    Course *arr;
    int enr;

public:
    Student(string id, string n) : ID(id), name(n)
    {
        arr = nullptr;
        enr = 0;
    }

    void enroll(const Course to_enroll)
    {
        cout << "Courses Enrolled : " << enr << endl;
        if (enr == 0)
        {
            enr++;
            arr = (Course *)malloc(enr * sizeof(Course));
            arr[enr - 1] = to_enroll;
        }

        else
        {
            enr++;
            arr = (Course *)realloc(arr, enr * sizeof(Course));
            arr[enr - 1] = to_enroll;
        }
        cout << "Enrollment done ! " << endl;
    }
    
    void drop(Course to_drop)
    {
        if (enr == 0)
        {
            cout << "No Course to drop" << endl;
        }

        else
        {
            for (int i = 0; i < enr; i++)
            {
                if (arr[i].get_code() == to_drop.get_code())
                {
                    for (int j = i + 1; j < enr; j++)
                    {
                        arr[j - 1] = Course(arr[j]);
                    }
                    enr--;
                    arr = (Course *)realloc(arr, enr * sizeof(Course));
                    break;
                }
            }
        }
    }
    int get_total_credit()
    {
        int t = 0;
        for (int i = 0; i < enr; i++)
        {
            t+= arr[i].get_credit();
        }
        return t;
    }

    void display()
    {
        cout << "Courses Enrolled : " << enr << endl;
        for (int i = 0; i < enr; i++)
        {
            cout << "Course Code : " << arr[i].get_code() << endl;
        }
    }
};

int main(){
    Course a ("CC001","English",3);
    Student muneeb("23k-0038" , "Muneeb" );
    muneeb.enroll(a);
    muneeb.display();
    cout << "Done " << endl;
}
