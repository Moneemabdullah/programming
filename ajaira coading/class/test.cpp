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
        cin >> name >> ID >> age;
        cin >> sub1 >> sub2 >> sub3;
        Cgpa = (sub1 + sub2 + sub3) / 3.0;
    }
};

class CSE : public Student
{
public:
    string top_name, top_ID, Dpt;
    int top_age;
    float CSE_top_Cgpa = -1;
    int top_sub1, top_sub2, top_sub3;
    int cse;

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
        cout << top_name << " " << top_ID << " " << top_age << " " << CSE_top_Cgpa << " ";
        cout << top_sub1 << " " << top_sub2 << " " << top_sub3 << endl;
    }
};

class EEE : public Student
{
public:
    string top_name, top_ID, Dpt;
    int top_age;
    float EEE_top_Cgpa = -1;
    int top_sub1, top_sub2, top_sub3;
    int eee;

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
        cout << top_name << " " << top_ID << " " << top_age << " " << EEE_top_Cgpa << " ";
        cout << top_sub1 << " " << top_sub2 << " " << top_sub3 << endl;
    }
};

class CE : public Student
{
public:
    string top_name, top_ID, Dpt;
    int top_age;
    float CE_top_Cgpa = -1;
    int top_sub1, top_sub2, top_sub3;
    int ce;

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
        cout << top_name << " " << top_ID << " " << top_age << " " << CE_top_Cgpa << " ";
        cout << top_sub1 << " " << top_sub2 << " " << top_sub3 << endl;
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