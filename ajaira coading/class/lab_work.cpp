/*
    MD Abdullah al Moneem

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name, ID, Dpt;
    int age;
    float cgpa;
    Student(string name, string ID, string dpt, int age, float cgpa)
    {
        this->name = name;
        this->ID = ID;
        this->Dpt = dpt;
        this->age = age;
        this->cgpa = cgpa;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        return a.cgpa < b.cgpa;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> student_list;
    int cse;
    // cout << "Enter the number of CSE students: ";
    cin >> cse;
    while (cse--)
    {
        string name, ID, Dpt = "CSE";
        int age;
        float cgpa;

        // cout << "Enter the name: ";
        cin >> name;
        // cout << "Enter ID: ";
        cin >> ID;
        // cout << "Enter age: ";
        cin >> age;
        // cout << "Enter CGPA: ";
        cin >> cgpa;
        Student obj(name, ID, Dpt, age, cgpa);
        student_list.push(obj);
    }

    int eee;
    // cout << "Enter the number of EEE students: ";
    cin >> eee;
    while (eee--)
    {
        string name, ID, Dpt = "EEE";
        int age;
        float cgpa;

        // cout << "Enter the name: ";
        cin >> name;
        // cout << "Enter ID: ";
        cin >> ID;
        // cout << "Enter age: ";
        cin >> age;
        // cout << "Enter CGPA: ";
        cin >> cgpa;
        Student obj(name, ID, Dpt, age, cgpa);
        student_list.push(obj);
    }

    int ce;
    // cout << "Enter the number of CE students: ";
    cin >> ce;
    while (ce--)
    {
        string name, ID, Dpt = "CE";
        int age;
        float cgpa;

        // cout << "Enter the name: ";
        cin >> name;
        // cout << "Enter ID: ";
        cin >> ID;
        // cout << "Enter age: ";
        cin >> age;
        // cout << "Enter CGPA: ";
        cin >> cgpa;
        Student obj(name, ID, Dpt, age, cgpa);
        student_list.push(obj);
    }

    Student top_student = student_list.top();
    cout << "The top student with the highest CGPA: \n"
         << "name: " << top_student.name << "\nStudent ID: " << top_student.ID << "\nStudent Dpt: " << top_student.Dpt << "\nStudent cgpa: " << top_student.cgpa << "\nAge of this student: " << top_student.age << endl;

    return 0;
}
