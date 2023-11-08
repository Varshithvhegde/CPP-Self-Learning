#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

class Student
{
private:
    int studentId;
    std::string studentName;
    int studentGrade;

public:
    Student(int studentId, string studentName, int studentGrade) : studentId(studentId), studentName(studentName), studentGrade(studentGrade) {}
    // ~Student();

    int getStudentId() const { return studentId; }

    int getStudentGrade() const { return studentGrade; }
    std::string getStudentName() const { return studentName; }
};

int main()
{
    Student student1(1, "Varshith", 95);
    Student *stu_pointer = &student1;

    cout << "Student Deatils" << endl;
    cout << stu_pointer->getStudentId() << endl;
    cout << stu_pointer->getStudentName() << endl;
    cout << stu_pointer->getStudentGrade() << endl;
}
