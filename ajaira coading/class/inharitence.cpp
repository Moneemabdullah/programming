/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;
class Grand_parent
{
public:
    string hobby;
    void get_hobby()
    {
        cin >> hobby;
    }
    void print_hobby()
    {
        cout << hobby;
    }
};

class Parent : public Grand_parent
{
public:
    string address;
    void get_address()
    {
        cin >> address;
    }
    void print_address()
    {
        cout << address;
    }
};

class child : public Parent
{
public:
    string name;
    string father_name;
    string mother_name;

    void input_data()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "\nEnter Father's name: ";
        cin >> father_name;
        cout << "\nEnter Mother's Name: ";
        cin >> mother_name;
        cout << "\nEnter Your hobby: ";
        get_hobby();
        cout << "\nEnter address: ";
        get_address();
    }

    void output_data()
    {
        cout << "\t INFORMATION\n";
        cout << "Name: " << name;
        cout << "\nFather's name: " << father_name;
        cout << "\nMother's Name: " << mother_name;
        cout << "\nYour hobby: ";
        print_hobby();
        cout << "\naddress: ";
        print_address();
    }
};

int main()
{
    child obj;
    obj.input_data();
    obj.output_data();
    return 0;
}
/* Thank you */