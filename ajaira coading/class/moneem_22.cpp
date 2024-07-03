/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name, ID;
    int age;
    float Cgpa;
    int sub1, sub2, sub3;

    void input()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter number of subject1: ";
        cin >> sub1;
        cout << "Enter number of subject2: ";
        cin >> sub2;
        cout << "Enter number of subject3: ";
        cin >> sub3;
        Cgpa = (sub1 + sub2 + sub3) / 3.0;
    }
};

class CSE : public Student
{
public:
    string top_name, top_ID, Dpt = "CSE";
    float CSE_top_Cgpa = -1;
    int top_sub1, top_sub2, top_sub3, cse, top_age;

    void get_top()
    {
        cout << "Enter the number of CSE students: ";
        cin >> cse;
        while (cse--)
        {
            input();
            if (Cgpa > CSE_top_Cgpa)
            {
                top_name = name;
                top_ID = ID;
                top_age = age;
                CSE_top_Cgpa = Cgpa;
                top_sub1 = sub1;
                top_sub2 = sub2;
                top_sub3 = sub3;
            }
        }
    }

    void output()
    {
        cout << "Name: " << top_name << endl;
        cout << "ID: " << top_ID << endl;
        cout << "depertment: " << Dpt << endl;
        cout << "age" << top_age << endl;
        cout << "Cgpa" << CSE_top_Cgpa << endl;
        cout << "number of subject1: " << top_sub1 << endl;
        cout << "number of subject2: " << top_sub2 << endl;
        cout << "number of subject3: " << top_sub3 << endl;
    }
};
class EEE : public Student
{
public:
    string top_name, top_ID, Dpt = "EEE";
    float EEE_top_Cgpa = -1;
    int top_sub1, top_sub2, top_sub3, top_age, eee;

    void get_top()
    {
        cout << "Enter the number of EEE students: ";
        cin >> eee;
        while (eee--)
        {
            input();
            if (Cgpa > EEE_top_Cgpa)
            {
                top_name = name;
                top_ID = ID;
                top_age = age;
                EEE_top_Cgpa = Cgpa;
                top_sub1 = sub1;
                top_sub2 = sub2;
                top_sub3 = sub3;
            }
        }
    }

    void output()
    {
        cout << "Name: " << top_name << endl;
        cout << "ID: " << top_ID << endl;
        cout << "depertment: " << Dpt << endl;
        cout << "age" << top_age << endl;
        cout << "Cgpa" << EEE_top_Cgpa << endl;
        cout << "number of subject1: " << top_sub1 << endl;
        cout << "number of subject2: " << top_sub2 << endl;
        cout << "number of subject3: " << top_sub3 << endl;
    }
};
class CE : public Student
{
public:
    string top_name, top_ID, Dpt = "CE";
    float CE_top_Cgpa = -1;
    int top_sub1, top_sub2, top_sub3, top_age, ce;

    void get_top()
    {
        cout << "Enter the number of CE students: ";
        cin >> ce;
        while (ce--)
        {
            input();
            if (Cgpa > CE_top_Cgpa)
            {
                top_name = name;
                top_ID = ID;
                top_age = age;
                CE_top_Cgpa = Cgpa;
                top_sub1 = sub1;
                top_sub2 = sub2;
                top_sub3 = sub3;
            }
        }
    }

    void output()
    {
        cout << "Name: " << top_name << endl;
        cout << "ID: " << top_ID << endl;
        cout << "depertment: " << Dpt << endl;
        cout << "age" << top_age << endl;
        cout << "Cgpa" << CE_top_Cgpa << endl;
        cout << "number of subject1: " << top_sub1 << endl;
        cout << "number of subject2: " << top_sub2 << endl;
        cout << "number of subject3: " << top_sub3 << endl;
    }
};
int main()
{
    CSE cse;
    EEE eee;
    CE ce;

    cse.get_top();
    eee.get_top();
    ce.get_top();

    if (cse.CSE_top_Cgpa > eee.EEE_top_Cgpa && cse.CSE_top_Cgpa > ce.CE_top_Cgpa)
    {
        cse.output();
    }
    else if (eee.EEE_top_Cgpa > cse.CSE_top_Cgpa && eee.EEE_top_Cgpa > ce.CE_top_Cgpa)
    {
        eee.output();
    }
    else
    {
        ce.output();
    }

    return 0;
}