/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH

    glovel friend fanction
*/

#include <bits/stdc++.h>
using namespace std;
class Area
{
private:
    float pi = 3.1416;

public:
    friend void area_of_circle(Area);
    friend void volume_of_glove(Area);
};

void area_of_circle(Area obj)
{
    int r = 5;

    cout << obj.pi * r * r;
}

void volume_of_glove(Area obj)
{
    int r = 6;
    cout << (3 / 4) * obj.pi * r * r;
}
int main()
{
    Area obj;
    area_of_circle(obj);
    volume_of_glove(obj);
    return 0;
}
/* Thank you */