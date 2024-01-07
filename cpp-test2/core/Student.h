#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Class Course
class Course {
public:
    string course_name;
    float fees;

    // Constructor to initialize course details
    Course(string course_name, float fees) {
        this->course_name = course_name;
        this->fees = fees;
    }
};
// Class Student
class Student {
public:
    string name;
    int rollno;
    string mobile;
    vector<Course> courses; // Vector to store courses taken by the student

    // Constructor to initialize student details
    Student(string name, int rollno, string mobile) {
        this->name = name;
        this->rollno = rollno;
        this->mobile = mobile;
    }

    // Function to register for a course
    void takeCourse(Course course) {
        courses.push_back(course);
    }

    // Function to display student's courses
    void displayCourses() {
        cout << "Courses taken by " << name << ": " << endl << "course->";
        for (int i=0;i<courses.size();i++) {
            cout <<courses[i].course_name << ", ";
        }
        cout << endl;
    }
};



// Vector to store all registered students
vector<Student> students;

// Function to register a student
void registerStudent() {
    string name, mobile;
    int rollno;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student rollno: ";
    cin >> rollno;
    cin.ignore(); // Ignore newline character
    cout << "Enter student mobile: ";
    getline(cin, mobile);

    Student student(name, rollno, mobile);
    students.push_back(student);
    cout << "Student registered successfully!" << endl;
}

// Function to take a course for a specific student
void takeCourse() {
    int rollno;
    cout << "Enter student rollno: ";
    cin >> rollno;

    Student* student = nullptr;
    for (Student& s : students) {
        if (s.rollno == rollno) {
            student = &s;
            break;
        }
    }

    if (student == nullptr) {
        cout << "Student not found!" << endl;
        return;
    }

    string course_name;
    float fees;
    cout << "Enter course name: ";
    cin.ignore(); // Ignore newline character
    getline(cin, course_name);
    cout << "Enter course fees: ";
    cin >> fees;

    Course course =Course(course_name, fees);
    student->takeCourse(course);
    cout << "Course registered successfully!" << endl;
}

// Function to display courses taken by a specific student
void displayStudentCourses() {
    int rollno;
    cout << "Enter student rollno: ";
    cin >> rollno;

    for (Student& student : students) {
        if (student.rollno == rollno) {
            student.displayCourses();
            return;
        }
    }

    cout << "Student not found!" << endl;
}

// Function to display all students and their courses
void displayAllStudents() {
    for (Student& student : students) {
        cout << "Student name: " << student.name << endl;
        cout << "Rollno: " << student.rollno << endl;
        cout << "Mobile: " << student.mobile << endl;
        student.displayCourses();
        cout << endl;
    }
}