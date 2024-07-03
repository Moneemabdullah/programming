#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    virtual void print()
    {
        cout << "I am class A" << endl;
    }
};
class B : public A
{
public:
    void print()
    {
        cout << "I am class B" << endl;
    }
};
class C : public A
{
public:
    void print()
    {
        cout << "I am class C" << endl;
    }
};
class D : public B, public C
{
public:
    void print()
    {
        cout << "I am class D" << endl;
    }
};

int main()
{
    D d;
    d.print();
    d.B ::print();
    d.C ::print();
    return 0;
}