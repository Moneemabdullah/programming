
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-09-29 16:06:47
*/

#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }

    void showRole()
    {
        cout << "I am a person." << endl;
    }
};

class Academic
{
protected:
    double gpa;

public:
    void setGPA(double g)
    {
        gpa = g;
    }

    void showGPA()
    {
        cout << "GPA: " << gpa << endl;
    }
};

class Sports
{
protected:
    string sport;

public:
    void setSport(string s)
    {
        sport = s;
    }

    void showSport()
    {
        cout << "Sport: " << sport << endl;
    }
};

class Student : public Person, public Academic, public Sports
{
public:
    void showRole()
    {
        cout << "I am a student." << endl;
    }

    void showDetails()
    {
        cout << "Name: " << name << endl;
        showGPA();
        showSport();
    }
};

int main()
{
    Student s;

    s.setName("Alice");
    s.setGPA(3.8);
    s.setSport("Basketball");

    Person *p = &s;
    p->showRole();

    s.showDetails();

    return 0;
}

/* Thank you */