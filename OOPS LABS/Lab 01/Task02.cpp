#include <iostream>

struct Student {
    int Maths;
    int English;
    int Science;
};

int main() {
    int n;

    std::cout << "Enter the number of students: ";
    std::cin >> n;
    struct Student Arr[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Enter Maths Marks: ";
        std::cin >> Arr[i].Maths;

        std::cout << "Enter English Marks: ";
        std::cin >> Arr[i].English;

        std::cout << "Enter Science Marks: ";
        std::cin >> Arr[i].Science;
    }

    for (int i = 0; i < n; i++) {
        int total = Arr[i].English + Arr[i].Maths + Arr[i].Science;
        float perc = (static_cast<float>(total) / 300) * 100;
        int avg = total / 3;

        std::cout << "Student " << i + 1 << " - ";
        std::cout << "Total: " << total << ", ";
        std::cout << "Average: " << avg << ", ";
        std::cout << "Percentage: " << perc << "%, ";

        if (perc >= 90 && perc <= 100) {
            std::cout << "Grade A\n";
        } else if (perc >= 80 && perc <= 89) {
            std::cout << "Grade B\n";
        } else if (perc >= 70 && perc <= 79) {
            std::cout << "Grade C\n";
        } else if (perc >= 60 && perc <= 69) {
            std::cout << "Grade D\n";
        } else {
            std::cout << "Grade F\n";
        }
    }

    return 0;
}