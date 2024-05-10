#include <iostream>

using namespace std;

class Employee {
protected:
    string ID;
    string Name;
public:
    Employee(string i, string n){
        this->ID = i;
        this->Name = n;
    }
    virtual double calculate_pay() const = 0;
    virtual void display_detail() const {
        cout << "ID: " << ID << endl;
        cout << "Name: " << Name << endl;
    }

};

class fullTimeEmployee : public Employee {
double monthly_salary;
public:
    fullTimeEmployee(string i, string n, double m) : Employee(i,n), monthly_salary(m){}

    double calculate_pay() const override  {
        return monthly_salary;
    }

    void display_detail() const override {
        Employee::display_detail();
        cout << "Monthly Salary : " << monthly_salary << endl;
    }
};

class partTimeEmployee : public Employee {
double hourly_wage;
double hours_worked;
public:
    partTimeEmployee(string i , string n , double h, double w): Employee(i,n), hourly_wage(h), hours_worked(w){}

    double calculate_pay() const override {
        return hourly_wage * hours_worked;
    }
    void display_detail() const override {
        Employee::display_detail();
        cout << "Hourly Wage: " << hourly_wage << endl;
        cout << "Hours Worked: " << hours_worked << endl;
    }
};
int main(){
    fullTimeEmployee yesa ("23k-0019", "Yesa" , 100000);
    partTimeEmployee muneeb ("23k-0038" , "Muneeb" , 1000, 100);
    yesa.display_detail();
    cout << "Total Pay : "  << yesa. calculate_pay() << endl;
    muneeb.display_detail();
    cout << "Total Pay : "  << muneeb.calculate_pay() << endl;


    Employee* ptr;
    ptr = new fullTimeEmployee("23k-0004","Huzaifa", 50000);
    ptr->display_detail();
    cout << "Total Pay : "  << ptr->calculate_pay() << endl;
}