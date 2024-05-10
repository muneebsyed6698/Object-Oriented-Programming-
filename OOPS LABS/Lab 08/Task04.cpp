#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Student : protected Person
{
protected:
    string StudentID;
    string gradeLevel;

public:
    Student(string name, string i, string g, int age) : Person(name, age)
    {
        StudentID = i;
        gradeLevel = g;
    }
};

class Teacher : protected Person
{
protected:
    string subject;
    int room;

public:
    Teacher(string s, int r, string name, int age) : Person(name, age)
    {
        subject = s;
        room = r;
    }
};

class GraduateStudent : protected Student, protected Teacher
{
public:
    GraduateStudent(string name1, string name2, int age1, int age2, int room, string subject, string StudentID, string gradeLevel) : Student(name1, StudentID, gradeLevel, age1), Teacher(subject, room, name2, age2)
    {
    }

    void display()
    {
        cout << "Student information" << endl
             << endl;
        cout << "Name of the student: " << Student::name << endl;
        cout << "Student ID: " << StudentID << endl;
        cout << "Age: " << Student::age << endl;
        cout << "Grade Level: " << gradeLevel << endl;
        cout << "Teacher information" << endl
             << endl;
        cout << "Name of the teacher: " << Teacher::name << endl;
        cout << "Room number: " << room << endl;
        cout << "Age: " << Teacher::age << endl;
        cout << "Subject: " << subject << endl;
    }
};
int main()
{
    GraduateStudent student1("Muneeb", "Talha", 16, 15, 4, "OOPS", "23k-0038", "AI_2A");
    student1.display();
}