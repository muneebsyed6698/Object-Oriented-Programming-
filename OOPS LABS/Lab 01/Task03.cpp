// We are given an array of numbers and we have to determine two number who will add up to a target number
// we will prompt user to enter a target  number

#include <iostream>

using namespace std;

int main () {
    int n = 6;

    int tar=0;
    
    cout << "Enter a Target Number= " ;

    cin >> tar;

    int array[n] = {1,3,4,5,7,24};

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            if (j == i) continue;
            if (array[i] + array[j] == tar) {
                printf("[%d,%d]\n",i,j);
                printf ("Because array[%d] + array [%d] == %d\n", i, j, tar);
                cout << array[i] << " + " << array[j] << " = " << tar ;
                array[i] =0;
                array[j] = 0;
                return 0;
            } 
        }
    }
}