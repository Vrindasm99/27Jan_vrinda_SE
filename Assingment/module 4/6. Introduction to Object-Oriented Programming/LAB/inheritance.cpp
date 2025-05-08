#include <iostream>
using namespace std;

class Person 
{
	public:
    string name;
    int age;

    void getDetails() 
	{
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showDetails() 
	{
        cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

class Student : public Person 
{
	public:
    string course;
    void getStudentDetails() 
	{
        getDetails();
        cout << "Enter course: ";
        cin >> course;
    }

    void showStudentDetails() 
	{
        showDetails();
        cout << "Course: " << course << endl;
    }
};

class Teacher : public Person 
{
	public:
    string subject;
    void getTeacherDetails() 
	{
        getDetails();
        cout << "Enter subject: ";
        cin >> subject;
    }

    void showTeacherDetails() 
	{
        showDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main() 
{
    Student s;
    Teacher t;

    cout << "--- Student Details ---" << endl;
    s.getStudentDetails();
    s.showStudentDetails();

    cout << "--- Teacher Details ---" << endl;
    t.getTeacherDetails();
    t.showTeacherDetails();

}

