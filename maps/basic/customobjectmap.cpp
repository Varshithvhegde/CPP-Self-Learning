#include <iostream>
#include <map>
#include <string>
using namespace std;
class Student
{
private:
    std::string name;
    int studentId;

public:
    Student(const string &name, int id) : name(name), studentId(studentId) {}
    // Overload the less-than operator to allow Student objects to be used as keys in a map
    bool operator<(const Student &other) const
    {
        return studentId < other.studentId;
    }

    std::string getName() const { return name; }

    int getStudentId() const { return studentId; }
};

int main()
{
    map<Student, int> studentGrades;
    Student student1("Alice", 123);
    Student student2("Bob", 124);
    Student student3("Varshith", 125);
    Student student4("Varsha", 126);

    studentGrades[student1]=90;
    studentGrades[student2]=70;
    studentGrades[student3]=100;
    studentGrades[student4]=80;
    
    cout<<"-------------------------------Student Details----------------------------------"<<endl;
    for (auto &&i : studentGrades)
    {
        cout<<"Student Name : "<<i.first.getName()<<", Student ID : "<<i.first.getStudentId()<<", Student Grades : "<<i.second<<endl;
    }

}