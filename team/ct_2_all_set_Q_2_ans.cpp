/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-19 21:03:13

    CT 2 set 1:
    design a class with privet member and declare a friend function outside the class to access that privet member 
    show how the friend function manipulte the privet deta

    CT 2 set 2:
    crteate a fanction that takes an obj of a class as an argument ans performs some operation on it 
    demostret passing obj by value and by reference,
*/

#include <bits/stdc++.h>
using namespace std;

class New
{
private:
    int x = 100;

public:
    friend int s(New);
};

int s(New obj)
{
    obj.x;
    cout << obj.x;
}

int main()
{
    New obj;

    s(obj);

    return 0;
}
