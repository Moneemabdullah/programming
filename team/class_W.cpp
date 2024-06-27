/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 30;

class Student
{
public:
    string F_name[N], L_name[N], ID[N];
    int age;

    void Enter_deta()
    {
        cout<<"Enter the fast name: ";
        cin>>F_name[0];
        cout<<"Enter the last name: ";
        cin>>L_name[0];
        cout<<"Enter the ID: ";
        cin>>ID[0];
        cin.ignore();
        cout<<"Enter age: ";
        cin>>age;
    }
    void Display()
    {
        cout<<"Name: "<<F_name[0]<<" "<<L_name[0]<<endl;
        cout<<"ID: "<<ID[0]<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class CSE : public Student
{
    string sub1, sub2, sub3;
public:
    void Enter_deta()
    {
        Student::Enter_deta();
        cout << "Enter subject1 name: ";
        cin >> sub1;
        cout << "Enter subject2 name: ";
        cin >> sub2;
        cout << "Enter subject3 name: ";
        cin >> sub3;
    }
    void Display()
    {
        Student::Display();
        cout << "The subject1 name: " << sub1 << endl;
        cout << "The subject2 name: " << sub2 << endl;
        cout << "The subject3 name: " << sub3 << endl;
    }

};

class EEE : public Student
{
    string sub1, sub2, sub3;
public:
    void Enter_deta()
    {
        Student::Enter_deta();
        cout << "Enter subject1 name: ";
        cin >> sub1;
        cout << "Enter subject2 name: ";
        cin >> sub2;
        cout << "Enter subject3 name: ";
        cin >> sub3;
    }
    void Display()
    {
        Student::Display();
        cout << "The subject1 name: " << sub1 << endl;
        cout << "The subject2 name: " << sub2 << endl;
        cout << "The subject3 name: " << sub3 << endl;
    }

};

class CE : public Student
{
    string sub1, sub2, sub3;
public:
    void Enter_deta()
    {
        Student::Enter_deta();
        cout << "Enter subject1 name: ";
        cin >> sub1;
        cout << "Enter subject2 name: ";
        cin >> sub2;
        cout << "Enter subject3 name: ";
        cin >> sub3;
    }
    void Display()
    {
        Student::Display();
        cout << "The subject1 name: " << sub1 << endl;
        cout << "The subject2 name: " << sub2 << endl;
        cout << "The subject3 name: " << sub3 << endl;
    }

};
int main()
{
    CSE ob1;
    ob1.Enter_deta();
    ob1.Display();
    EEE ob2;
    ob2.Enter_deta();
    ob2.Display();
    CE ob3;
    ob3.Enter_deta();
    ob3.Display();
    return 0;
}
/* Thank you */
