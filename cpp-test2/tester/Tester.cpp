#include<iostream>
#include"../core/Student.h"
using namespace std;
int main() {
    int choice;
    do {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Run student registration test" << std::endl;
        std::cout << "2. Run course registration test" << std::endl;
        std::cout << "3. Run display student courses test" << std::endl;
        std::cout << "4. Run display all students test" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Run student registration test
                registerStudent();
                break;
            case 2:
                // Run course registration test
                takeCourse();
                break;
            case 3:
                // Run display student courses test
                displayStudentCourses();
                break;
            case 4:
                // Run display all students test
                displayAllStudents();
                break;
            case 5:
                
                break;
            default:
                break;
        }
    } while (choice != 5);

    return 0;
}