#include <iostream>
#include <string>

void line () {
    std::cout << "*******************************" << std::endl;
}

int main () {

    std::string name;
    int mark;
    int total = 0;
    double average;

    std::cout << "Whats the student name?" << std::endl;
    std::cin >> name;

    for (int i = 1; i <= 3; i++) {
        std::cout << "enter mark" << i << ": ";
        std::cin >> mark;

        total = total + mark;
    }

    average = static_cast<double>(total) / 3;

    line();
    std::cout << "Student: " << name << std::endl;
    std::cout << "Total: " << total << std::endl;
    std::cout << "Average: " << average << std::endl;

    if (average >= 70) {
        std::cout << "Excellent!" << std::endl;
    }
    else if (average >= 50) {
        std::cout << "You passed!" << std::endl;
    }
    else {
        std::cout << "You failed." << std::endl;
    }

    line();

    return 0;

}
 // my first c++ git project