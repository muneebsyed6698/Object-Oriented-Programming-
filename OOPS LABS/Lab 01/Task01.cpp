
#include <iostream>

int main() {
    // Write C++ code here
    int m;
    
    std::cout << "Enter a Number: ";
    std::cin >> m;
    int n = m;
    n = n-1;
    while(n > 2){
	n = n-1;
	if (m % n == 0){
		std::cout << "This is not a Prime Number: ";
		return 0;
	}
	}
	std::cout << "This is a Prime Number: ";
}