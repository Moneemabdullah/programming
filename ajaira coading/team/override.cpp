/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>
using namespace std;

class N
{
private:
public:
    void sum()
    {
        cout << "this is main fanction" << endl;
    }
};

class override : public N
{
private:
public:
    void sum()
    {
        cout << "this is override fanction" << endl;
    }
};

int main()
{
    N ob;
    override obj;

    ob.sum();
    obj.sum();
    return 0;
}
/* Thank you */