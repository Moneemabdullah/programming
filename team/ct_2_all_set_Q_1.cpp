/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH

    CT 2 set 1
    write a fanction to demostrate fanction overloading in a class,
create multiple fanmction with same name but defferent perameter ans show 
how they invoke

    CT 2 set 2
    Create a class with member fanction that takes defult arguments.
    demostret caslling this fanction with and without passing arguments 
    
*/

#include <bits/stdc++.h>
using namespace std;

class N
{
public:
    int x()
    {
        cout << "x" << endl;
    }
    int x(int a)
    {
        cout << a << endl;
    }
};
int main()
{
    N ob;
    ob.x();
    ob.x(2);
    return 0;
}
/* Thank you */
