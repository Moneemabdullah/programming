/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

class ClassB;

class ClassA
{
private:
    int numA = 100654;

public:
    friend class ClassB;
};

class ClassB
{
public:
    void display(ClassA &objA)
    {
        cout << objA.numA;
    }
};

int main()
{
    ClassA objA;
    ClassB objB;
    objB.display(objA);

    return 0;
}