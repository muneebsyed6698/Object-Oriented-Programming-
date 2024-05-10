#include <iostream>

using namespace std;

inline int batting_average(int run , int dis ){
    return run / dis;
}

inline int strike_rate(int run , int face){
    return ( run / face ) * 100;
}

int main(){
    int r;
    int b;
    int d;
    cout << "Enter Total Runs Scored: " << endl;
    cin >> r;
    cout << "Enter Total Balls Faced: " << endl;
    cin >> b;
    cout << "Enter Total Dismissed Count: " << endl;
    cin >> d;

    cout << "Batting average is : " << batting_average(r,d);
    cout << "Strike Rate is : " << strike_rate(r,b);
}