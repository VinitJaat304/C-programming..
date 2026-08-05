#include <iostream>
#include <string.h>
using namespace std;

class Student
{

private:
    char stu_name[20];
    int stu_rollno;
    float stu_gpa;
    int &refRollno = this->stu_rollno;

public:
    Student()
    {
        this->stu_rollno = 0;
        strcpy(this->stu_name, "NO NAME");
        this->stu_gpa = 0;
    }
    Student(int rollno, char name[], float gpa)
    {
        this->stu_rollno = rollno;
        strcpy(this->stu_name, name);
        this->stu_gpa = gpa;
    }
    Student(Student &s)
    {
        stu_rollno = s.stu_rollno;
        stu_gpa = s.stu_gpa;
        strcpy(stu_name, s.stu_name);
    }
    ~Student()
    {
    }
    void getStudentData()
    {
        cout << "Roll NO : " << refRollno << endl;
        cout << "Name : " << stu_name << endl;
        cout << "GPA : " << stu_gpa << endl;
    }
};
class StudentRecordManager
{
private:
    Student stu[20];
    int size = 0;
};
