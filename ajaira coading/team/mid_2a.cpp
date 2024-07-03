/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
    string model;
    int year = 2000;
    int speed;

public:
    void input()
    {
        cin >> speed;
    }
    void accel(int x)
    {
        speed += x;
    }
    void brak()
    {
        speed--;
    }
    void output()
    {
        cout << speed;
    }
};

int main()
{
    Car obj;
    cout << "input speed :";
    obj.input();
    obj.accel(5);
    obj.brak();
    cout << "Final speed: ";
    obj.output();

    return 0;
}
