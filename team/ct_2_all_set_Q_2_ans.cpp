/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-05-19 21:03:13
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
