#include <iostream>

using namespace std;

class appointment{
private:
    string job;
    int cost;
public:
    static int apo_count;
    static int total_earnings;
    static int average_cost();

    appointment(string j, int c) : job(j), cost(c) {
        apo_count++;
        total_earnings += cost;
    }

    void display(){
        cout << "Job : " << job << endl;
        cout << "Cost : " << cost << endl;
    }
};

int appointment::apo_count = 0;
int appointment::total_earnings = 0;
int appointment::average_cost(){
    return total_earnings / apo_count;
}

int main(){
    appointment a ("Hair" , 10000);
    appointment b ( "Nails " , 600);
    appointment c ("Facial" , 4000);
    a.display();
    b.display();
    c.display();
    cout << "Total jobs done are: " << appointment::apo_count << endl;
    cout << "Total earnings are: " << appointment::total_earnings << endl;
    cout << "Average cost per appointment : " << appointment::average_cost();
}