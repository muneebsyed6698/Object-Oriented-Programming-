// we have to consider a container and there are line in that container 
// we have to determine two line which will add up to give us the most area.

#include<iostream>
#include<cstdlib>


using namespace std;

int small(int a, int b);

int main (){
    int n = 5;
    int arr[n] {4,1,1,1,4};

    int area_max = 0;

    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n ; j++) {
            if (i == j) continue;
            int area = abs(i-j) * small(arr[i], arr[j]);
            if (area > area_max){
                area_max = area;
            }
        }
    }
    cout << "The max area possible is " << area_max;
}

int small(int a, int b){
    if (a < b) return a;
    else if (b < a ) return b;
    else if (a == b) return a; 
}